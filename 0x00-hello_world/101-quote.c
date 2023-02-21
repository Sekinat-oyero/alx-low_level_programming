#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * main - writing quote
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int l = strlen(quote);

	write(STDERR_FILENO, quote, l);
	return (1);
}
