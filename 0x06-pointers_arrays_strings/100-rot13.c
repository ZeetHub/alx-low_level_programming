#include "main.h"

/**
 * *rot13 - encodes a string using rot13 algorithm
 * @s: pointer to the character array
 *
 * Return: pointer to the array of encoded character
 */

char *rot13(char *s)
{
	int i, flag;

	i = 0;
	while (s[i] != '\0')
	{
		flag = 1;
		while (((s[i] <= 'a' && s[i] >= 'z') || (s[i] <= 'A' && s[i] >= 'Z')) && flag)
		{
			if ((s[i] <= 'a' && s[i] >= 'm') || (s[i] <= 'A' && s[i] >= 'M'))
			{	s[i] += 13;
				flag = 0;
			}

			s[i] -= 13;
			flag = 0;
		}
		i++;
	}

	return (s);
}
