#include "main.h"
#include <string.h>

/**
 * print_rev - returns the length of a string
 * @s: string
 *
 */
void print_rev(char *s)
{
	int ster = strlen(s);
	int i = 0;

	for (i = ster - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
