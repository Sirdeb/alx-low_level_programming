#include "main.h"

/**
 * _isalpha - to check for alphabetic char
 * @i: character to check
 * Return: 1 if i is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	return ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'));
}
