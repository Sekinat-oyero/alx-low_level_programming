#include <stdio.h>

/**
 * main - a program that prints in lower case in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
