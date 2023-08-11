#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - that is going to reallocate a memory block using malloc and free
 * @ptr: the pointer to the memory previsouly allocated by malloc
 * @o_s: the size of the allocated memory for ptr
 * @n_s: the new size of the new memory block
 *
 * Return: the pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int o_s, unsigned int n_s)
{
	char *ptr1;
	char *old_ptr;
	unsigned int a;

	if (n_s == o_s)
		return (ptr);

	if (n_s == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(n_s));

	ptr1 = malloc(n_s);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (n_s < o_s)
	{
		for (a = 0; a < new_size; a++)
			ptr1[a] = old_ptr[a];
	}

	if (n_s > o_s)
	{
		for (a = 0; a < o_s; a++)
			ptr1[a] = old_ptr[a];
	}

	free(ptr);
	return (ptr1);
}
