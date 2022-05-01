#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src including
 * the terminating null byte (\0) to the buffer pointed to
 * by dest
 * @dest: the pointer to the buffer
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}