#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * *@n: the integer to findhe last digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	if (n > 0)
	n = -n;

	l = n % 10;

	if (l < 0)
		l = -l;
	_putchar(l + '0');

	return (l);
}
