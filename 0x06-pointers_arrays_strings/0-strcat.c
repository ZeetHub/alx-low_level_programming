#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	for (; src[j] != '\0'; i++, j++)
	{
		dest[i + 1] = src[j];
	}
	putchar('\0');
	return (dest);
}
