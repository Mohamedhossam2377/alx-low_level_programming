#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t num_bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (filename == NULL || letters == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	num_bytes = read(fp, &buffer[0], letters);
	num_bytes = write(STDOUT_FILENO, &buffer[0], num_bytes);
	close(fp);
	return (num_bytes);
}
