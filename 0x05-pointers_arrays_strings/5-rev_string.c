#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i, len_for, len_rev;
	char tmpo;

	len_for = 0;
	len_rev = 0;

	while (s[len_for] != '\0')
	{
		len_for++;
	}

	len_rev = len_for - 1;

	for (i = 0; i < len_for / 2; i++)
	{
		tmpo = s[i];
		s[i] = s[len_rev];
		s[len_rev--] = tmpo;
	}
}
