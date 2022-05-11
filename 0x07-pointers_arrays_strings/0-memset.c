#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: the memory area pointed to by s
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		char[i] = b;
		i++;
	}

	return (s);
}
