#include "main.h"
#include <stdlib.h>
/**
 * argstostr - the main entry
 * @ac: the int input
 * @av: the double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a, b, r = 0, j = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			j++;
	}
	j += ac;

	str = malloc(sizeof(char) * j + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[r] = av[a][b];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
