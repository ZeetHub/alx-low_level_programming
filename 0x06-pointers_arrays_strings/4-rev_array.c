#include "main.h"

/**
 * reverse_array - reverses the contet of array of intengers
 * @a: the array
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int elm_cpy;
	int i;

	i = 0;
	for (int i = 0; i < n / 2; i++, n--)
	{
		elm_cpy = a[i];
		a[i] = a[n - 1];
		a[n - 1] = elm_cpy;
	}
}
