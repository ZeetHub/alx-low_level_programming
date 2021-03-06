#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string whose words are to be capitalized.
 *
 * Return: the capitalized string.
 */

char *cap_string(char *s)
{
	int i, j;

	char s_char[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == s_char[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
			}
		}

		i++;
	}

	return (s);
}
