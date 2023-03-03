#include "main.h"
#include <unistd.h>

/**
 * _putchar - A function that writes character c to stdout
 * @c: The character to print
 *
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
