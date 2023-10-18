#include "main.h"

/**
 * print_sign - checks if a character is lowercase.
 * @n: the character to be checked.
 *
 * Return: 1 print '+' if 'n', 0 print 0 if 'n' = 0, -1 print '-' if 'n'
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
