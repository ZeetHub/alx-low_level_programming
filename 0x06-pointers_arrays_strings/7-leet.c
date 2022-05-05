#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @s: string to be encoded
 *
 * Return: pinter to the encoded string
 */

char *leet(char *s)
{
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (l[j] != '\0')
		{
			if (s[i] == l[j])
				s[i] = n[j];
			j++;
		}
		i++;
	}

	return (s);
}
