#include <stdio.h>

/**
 * main - a program that prints characters in lower case
 * except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		al++;
	}
	putchar('\n');
	return (0);
}
