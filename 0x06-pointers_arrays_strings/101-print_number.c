#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int digits = 0, num, i = 1, div;
	char ch;

	num = n;
	if (num < 0)
		num *= -1;
	if (num == 0)
		digits = 1;
	else
	{
		while (num > 0 && (num / 10) >= 0)
		{
			num /= 10;
			digits++;
		}
	}

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	while (i <= digits)
	{
		if (i < digits)
		{
			div = n / (pow(10, (digits - i)));
			n = n - div * pow(10, (digits - i));
		}
		else
			div = n % 10;

		ch = div + '0';
		putchar(ch);
		i++;
	}
	putchar('\n');
}
