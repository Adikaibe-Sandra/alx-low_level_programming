#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of two numbers
 * @a: integer
 * @b: integer
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return difference of two numbers
 * @a: integer
 * @b: integer
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: integer
 * @b: integer
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers
 * @a: integer
 * @b: integer
 * Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of division
 * @a: integer
 * @b: integer
 * Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
