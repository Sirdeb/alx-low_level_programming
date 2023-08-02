#include "main.h"
#include <unistd.h>
/**
 * _putchar - it writes the char c to stdout
 * @c: The char to print
 *
 * Return: success 1.
 * On error, -1 returned, and errno set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
