#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		else if (s[i] == '\0')
			return (NULL);

		s++;
	}
}
