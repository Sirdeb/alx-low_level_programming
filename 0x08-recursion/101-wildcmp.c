#include "main.h"

/**
 * wildcmp - Compares the  strings
 * @i1: pointer to string params
 * @i2: pointer to string params
 * Return: 0
 */

int wildcmp(char *i1, char *i2)
{
	if (*i1 == '\0')
	{
		if (*i2 != '\0' && *i2 == '*')
		{
			return (wildcmp(i1, i2 + 1));
		}
		return (*i2 == '\0');
	}

	if (*i2 == '*')
	{
		return (wildcmp(i1 + 1, i2) || wildcmp(i1, i2 + 1));
	}
	else if (*i1 == *i2)
	{
		return (wildcmp(i1 + 1, i2 + 1));
	}
	return (0);
}
