#include <stdio.h>

/**
 * main - a program that prints
 * all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char al;

	for (n = 38; n < 48; n++)
	{
		putchar(n);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
