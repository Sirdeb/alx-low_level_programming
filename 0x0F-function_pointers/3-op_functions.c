#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - it will be returning the sum of two numbers.
 * @a: This will be the first number.
 * @b: This will be the second number.
 *
 * Return: will be returning the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - it will be returning the difference of two numbers.
 * @a: This will be the first number.
 * @b: This will be the second number.
 *
 * Return: will return the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - it will be returning the product of two numbers.
 * @a: This will be the first number.
 * @b: This will be the second number.
 *
 * Return: will return the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - it will be returning the division of two numbers.
 * @a: This will be the first number.
 * @b: This will be the second number.
 *
 * Return: will return the quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - it will be returning the remainder of the division of two numbers.
 * @a: This will be the first number.
 * @b: This will be the second number.
 *
 * Return: will return remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
