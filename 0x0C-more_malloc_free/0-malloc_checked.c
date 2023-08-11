#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - to allocate memory using malloc
 * @i: the number of bytes to be allocated
 *
 * Return: pointer to be the allocated memory
 */
void *malloc_checked(unsigned int i)
{
	void *ptr;

	ptr = malloc(i);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
