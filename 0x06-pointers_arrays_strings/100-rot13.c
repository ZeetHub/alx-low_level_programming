#include "main.h"

/**
 * *rot13 - encodes a string using rot13 algorithm (I don't think this
 * code is efficient!)
 * @s: pointer to the character array
 *
 * Return: pointer to the array of encoded character
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		while ((s[i] <= 'a' && s[i] >= 'z') || (s[i] <= 'A' && s[i] >= 'Z'))
		{
			if ((s[i] <= 'a' && s[i] >= 'm') || (s[i] <= 'A' && s[i] >= 'M'))
			{	s[i] += 13;
				break;
			}

			s[i] -= 13;
			break;
		}
		i++;
	}

	return (s);
}
