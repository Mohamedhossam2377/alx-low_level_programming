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
	int fd_from = 0;
	int fd_to = 0;
	ssize_t num_bytes;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((num_bytes = read(fd_from, buffer, READ_BUF_SIZE)) > 0)
		if (write(fd_to, buffer, num_bytes) != num_bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (num_bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_from), exit(100);
	if (fd_to)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd_from), exit(100);

	return (EXIT_SUCCESS);
}
