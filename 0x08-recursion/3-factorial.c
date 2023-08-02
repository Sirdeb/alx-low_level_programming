#include "main.h"

/**
 * factorial - it should return the factorial of a number
 * @a: number to be returned should be the factorial from
 *
 * Return: factorial of a
 */
int factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	return (a * factorial(a - 1));
}
