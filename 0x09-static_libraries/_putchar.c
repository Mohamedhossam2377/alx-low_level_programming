#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 *
 * @c: character
 *
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
