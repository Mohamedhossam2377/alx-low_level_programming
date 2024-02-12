#include "main.h"

/**
 * str_len - return length of string
 *
 * @st: string
 *
 * Return: length of string
 */
int str_len(char *st)
{
	int i;

	if (st == NULL)
		return (0);

	for (i = 0; *st++; i++)
		;
	return (i);
}
/**
 * create_file - function that creates a file
 *
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t num_bytes = 0;
	ssize_t len = str_len(text_content);

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (len)
		num_bytes = write(fp, text_content, len);
	close(fp);
	return (num_bytes == len ? 1 : -1);
}
