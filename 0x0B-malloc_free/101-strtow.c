#include <stdlib.h>
#include "main.h"

/**
 * count_word - its a helper function that count the number of words in a string
 * @s: the string to be evaluated
 *
 * Return: the number of words
 */
int count_word(char *s)
{
	int flag, i, j;

	flag = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			j++;
		}
	}

	return (j);
}
/**
 * **strtow - to split a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (m = 0; m <= len; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (i)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (i + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - i;
				k++;
				i = 0;
			}
		}
		else if (i++ == 0)
			start = m;
	}

	matrix[k] = NULL;

	return (matrix);
}
