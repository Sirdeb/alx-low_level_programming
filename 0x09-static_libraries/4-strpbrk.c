#include "main.h"
/**
 * _strpbrk - the entry point
 * @i: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *i, char *accept)
{
	int k;

	while (*i)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*i == accept[k])
		return (i);
		}
	i++;
	}

return ('\0');
}
