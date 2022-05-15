#include "main.h"


/**
 * print_number - prints an integer.
 * @n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int digits, i, div;
	char ch;

	i = 1;
	digits = num_digit(n);

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (i <= digits)
	{
		if (i < digits)
		{
			div = n / (pwr(digits - i));
			n = n - div * (pwr(digits - i));
		}
		else
			div = n % 10;

		ch = div + '0';
		_putchar(ch);
		i++;
	}
}

/**
 * num_digit - finds the number of digits of an integer
 * @num: number whose number of digits is to be found
 *
 * Return: the number of digits
 */

int num_digit(int num)
{
	int digits;

	digits = 0;
	if (num == 0)
		digits = 1;
	else
	{
		while (num != 0)
		{
			num /= 10;
			digits++;
		}
	}
	return (digits);
}

/**
 * pwr - finds decimal power of a number
 * @y: exponent
 *
 * Return: power
 */

int pwr(int y)
{
	int p;
	int i;

	p = 1;
	i = 0;
	while (i < y)
	{
		p *= 10;
		i++;
	}
	return (p);
}
