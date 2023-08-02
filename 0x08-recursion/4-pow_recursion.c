#include "main.h"

/**
 * _pow_recursion - to return the value of o raised to the power of m
 * @o: value to be raised
 * @m: power
 *
 * Return: the result of the power
 */
int _pow_recursion(int o, int m)
{
	if (m < 0)
		return (-1);
	if (m == 0)
		return (1);
	return (o * _pow_recursion(o, m - 1));
}
