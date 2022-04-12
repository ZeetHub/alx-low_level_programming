#include "main.h"

/**
 * print _alphabet - prints letters of the alphabet 
 * in small leters
 */

void print_alphabet(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
