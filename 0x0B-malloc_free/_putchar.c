#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write char i to stdout
 * @i: char to be printed
 *
 * Return: 1(Success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
