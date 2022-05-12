#include "3-calc.h"

/**
  * op_add - finds sum of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - finds difference of a and b
  * @a: first int
  * @b: second int
  *
  * Return: difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - finds product of a and b
  * @a: first int
  * @b: second int
  *
  * Return: product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - finds division of a and b
  * @a: first int
  * @b: second int
  *
  * Return: division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - finds modulo of a and b
  * @a: first int
  * @b: second int
  *
  * Return: modulo
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
