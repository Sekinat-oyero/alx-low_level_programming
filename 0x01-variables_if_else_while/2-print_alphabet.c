#include <stdio.h>

/**
 * main - a program that prints in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
