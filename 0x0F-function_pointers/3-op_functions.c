#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: Sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference between the two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: division of the two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulus of the two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
