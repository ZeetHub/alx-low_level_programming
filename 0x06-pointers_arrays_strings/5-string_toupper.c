#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase letters.
 */

char *string_toupper(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		if (97 <= s[j] && s[j] <= 122)
		{
			s[j] = s[j] - 32;
			j++;
		}
	}

	return s;
}
