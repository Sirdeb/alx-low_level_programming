#include "main.h"

/**
 * _atoi - it converts a string into an integer.
 *
 * @a: the string to be used.
 *
 * Return: an integer.
 */

int _atoi(char *a)
{
	int sign = 1, j = 0;
	unsigned int res = 0;

	while (!(a[j] <= '9' && a[j] >= '0') && a[j] != '\0')
	{
		if (a[j] == '-')
			sign *= -1;
		j++;
	}
	while (a[j] <= '9' && (a[j] >= '0' && a[j] != '\0'))
	{
		res = (res * 10) + (a[j] - '0');
		j++;
	}
	res *= sign;
	return (res);
}
