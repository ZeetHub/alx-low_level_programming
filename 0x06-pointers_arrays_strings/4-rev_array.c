#include "main.h"

/**
 * reverse_array - reverses the contet of array of intengers
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int elm_cpy;
	int i, j;

	i = 0;
	j = n - 1;
	for (i = 0; i < n / 2; i++, j--)
	{
		elm_cpy = a[i];
		a[i] = a[j];
		a[j] = elm_cpy;
	}
}
