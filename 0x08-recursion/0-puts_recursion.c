#include "main.h"
/**
 * _puts_recursion - to function like puts();
 * @i: always input
 * Return: if success 0
 */
void _puts_recursion(char *i)
{
	if (*i)
	{
		_putchar(*i);
		_puts_recursion(i + 1);
	}

	else
		_putchar('\n');
}
