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
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of file
 * @text_content: text to write
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t num_bytes = 0;
	ssize_t len = str_len(text_content);

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (len)
		num_bytes = write(fp, text_content, len);
	close(fp);
	return (num_bytes == len ? 1 : -1);
}
