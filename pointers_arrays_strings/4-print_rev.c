#include "main.h"

/**
 * int_rev - returns the length of a string
 * @s: string
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = *s - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
