#include <unistd.h>


/**
 * _putchar - to write the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 if successful
 * On error, -1 to be returned, and errno  set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
