#include "main.h"

int actual_sqrt_recursion(int e, int w);

/**
 * _sqrt_recursion - to return the natural square root of a number
 * @e: num to calculate the square root of
 *
 * Return: resulting square root
 */
int _sqrt_recursion(int e)
{
	if (e < 0)
		return (-1);
	return (actual_sqrt_recursion(e, 0));
}

/**
 * actual_sqrt_recursion - it should recurse to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
