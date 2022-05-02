#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for(; scr[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
