#include "main.h"

/**
 * _strlen - returns the length of a string
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
