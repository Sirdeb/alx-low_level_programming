#include <stdio.h>
#include "main.h"

/**
 * _putchar - to write the char i to stdout
 * @i: char to be printed
 *
 * Return: If successful 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char i)
{
return (write(1, &i, 1));
}
