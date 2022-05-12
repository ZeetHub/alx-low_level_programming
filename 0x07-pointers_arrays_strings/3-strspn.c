#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: set of characters to match with s
 *
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ctr;
	int flag;

	ctr = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ctr++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (ctr);
	}
}
