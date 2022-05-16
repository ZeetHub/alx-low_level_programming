#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @needle: substring to be looked for
 * @haystack: string to look the substring from
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, flag;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; needle[j] != '\0' && !flag; j++)
		{
			if (haystack[i] != needle[j])
			{
				flag = 1;
				haystack = &haystack[0];
			}
			else
			{
				haystack = &haystack[i];
				i = 0;
			}
		}
	}
}
