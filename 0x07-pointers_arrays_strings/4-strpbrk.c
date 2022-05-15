#include "main.h"

/**
 * strpbrk - searches a string for any of a set of bytes.
 * @s: string to search for the occurence of a byte
 * @accept: string to match with s to find first occuring byte
 *
 * Return: pointer to the first occurence of of a byte from accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, flag;

	i = 0;
	flag = 1;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0' && flag; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 0;
				return (s);
			}
		}
		i++;
	}
	return ('\0');
}
