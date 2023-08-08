#include "main.h"
#include <stdlib.h>
/**
 * create_array - it creates an array of size and assign char j
 * @size: the size of the array
 * @j: char to be assigned
 * Description: create array of size size and assign char j
 * Return: pointer to the array, NULL if fail
 *
 */
char *create_array(unsigned int size, char j)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = j;
	return (str);
}
