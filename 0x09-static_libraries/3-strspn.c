#include "main.h"
/**
 * _strspn - the entry point
 * @a: the input
 * @accept: the input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *a, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*a)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*a == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		a++;
	}
	return (n);
}
