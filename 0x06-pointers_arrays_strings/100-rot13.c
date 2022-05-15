#include "main.h"

/**
 * *rot13 - encodes a string using rot13 algorithm
 * @s: pointer to the character array
 *
 * Return: pointer to the array of encoded character
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] <= 'a' && s[i] >= 'm') || (s[i] <= 'A' && s[i] >= 'M'))
			s[i] += 13;
		else if ((s[i] <= 'n' && s[i] >= 'z') || (s[i] <= 'N' && s[i] >= 'Z'))
			s[i] -= 13;
		i++;
	}

	return (s);
}
