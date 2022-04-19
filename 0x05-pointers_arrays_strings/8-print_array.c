#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to be printed
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int elm;

	for (elm = 0; elm < n; elm++)
	{
		if (elm == 0)
			printf("%d", a[elm]);
		else
			printf(", %d", a[elm]);
	}
		printf("\n");
}
