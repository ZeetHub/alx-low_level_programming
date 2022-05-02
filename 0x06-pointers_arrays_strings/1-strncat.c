#include "main.h"

/**
 * _strncat - concatenates two strings
 * with atmost n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of character to be copied
 *
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;

	for (int j = 0; j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
