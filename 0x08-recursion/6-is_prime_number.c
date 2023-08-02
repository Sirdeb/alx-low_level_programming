#include "main.h"

int actual_prime(int e, int w);

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @e: number to be evaluated
 *
 * Return: 1 if e is a prime number, 0 if not
 */
int is_prime_number(int e)
{
	if (e <= 1)
		return (0);
	return (actual_prime(e, e - 1));
}

/**
 * actual_prime - checks if a number is prime recursively
 * @e: number to be evaluated
 * @w: iterator
 *
 * Return: 1 if e is a prime, 0 if not
 */
int actual_prime(int e, int w)
{
	if (w == 1)
		return (1);
	if (e % w == 0 && w > 0)
		return (0);
	return (actual_prime(e, w - 1));
}
