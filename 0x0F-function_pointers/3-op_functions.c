#include "3-calc.h"
/**
 * op_add - adds two ints
 * @a: num 1
 * @b: num 2
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: num 1
 * @b: num 2
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: num 1
 * @b: num 2
 *
 * Return: mult of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: num 1
 * @b: num 2
 *
 * Return: a divides b rounded down
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives remainder of two ints using mod operator
 * @a: num 1
 * @b: num 2
 *
 * Return: remainder of a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
