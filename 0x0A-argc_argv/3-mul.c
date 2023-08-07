#include <stdio.h>
#include "main.h"

/**
 * _atoi - to convert a string to an integer
 * @a: string to be converted
 *
 * Return: int converted from the string
 */
int _atoi(char *a)
{
	int c, d, e, len, f, digit;

	c = 0;
	d = 0;
	e = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (a[len] != '\0')
		len++;

	while (c < len && f == 0)
	{
		if (a[c] == '-')
			++d;

		if (a[c] >= '0' && a[c] <= '9')
		{
			digit = a[c] - '0';
			if (d % 2)
				digit = -digit;
			e = e * 10 + digit;
			f = 1;
			if (a[c + 1] < '0' || a[c + 1] > '9')
				break;
			f = 0;
		}
		c++;
	}

	if (f == 0)
		return (0);

	return (e);
}

/**
 * main - thet multiplies two numbers
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 Success, 1 Error
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
