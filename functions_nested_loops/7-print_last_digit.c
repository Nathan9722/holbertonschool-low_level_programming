#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the character to be checked.
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
	_putchar('0' + last_digit);
	return (last_digit);
	}
	_putchar('\n');
}
