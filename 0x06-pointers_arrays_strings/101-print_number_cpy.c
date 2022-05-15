#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: nothing
 */

int num_digit (int n)
{
	int digits = 0;

	if (n < 0)
		n *= -1;
	if (n == 0)
		digits = 1;
	else
	{
		while (n > 0 && (n / 10) >= 0)
		{
			n /= 10;
			digits++;
		}
	}
	return digits;
}

int pwr(int x, int y)
{
	int p = 1;
	int i = 0;

	while (i < y)
	{
		p *= 10;
		i++;
	}
	return p;
}

void print_number(int n)
{
	int digits = 0, i = 1, div;
	char ch;

	digits = num_digit(n);

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}
	while (i <= digits)
	{
		if (i < digits)
		{
			div = n / (pwr(10, (digits - i)));
			n = n - div * pwr(10, (digits - i));
		}
		else
			div = n % 10;

		ch = div + '0';
		putchar(ch);
		i++;
	}
}
