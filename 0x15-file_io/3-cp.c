#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %s\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - function
 *
 * @ac: argument count
 * @av: argument value
 *
 * Return: 1 success or 0 fail
 */
int main(int ac, char **av)
{
	int fp_from = 0;
	int fp_to = 0;
	ssize_t num_bytes;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fp_from = open(av[1], O_RDONLY);
	if (fp_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	fp_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fp_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((num_bytes = read(fp_from, buffer, READ_BUF_SIZE)) > 0)
		if (write(fp_to, buffer, num_bytes) != num_bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (num_bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fp_from = close(fp_from);
	fp_to = close(fp_to);
	if (fp_from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fp_from), exit(100);
	if (fp_to)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fp_from), exit(100);

	return (EXIT_SUCCESS);
}
