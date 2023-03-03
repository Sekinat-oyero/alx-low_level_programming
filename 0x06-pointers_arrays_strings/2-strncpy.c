#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: var one
 * @src: var two
 * @n: input
 *
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
       int j;

       j = 0;
       while (j < n && src[j] != '\0')
       {
	       dest[j] = src[j];
	       j++;
       }
       while (j < n)
       {
	       dest[j] = '\0';
	       j++;
       }

       return (dest);
}
