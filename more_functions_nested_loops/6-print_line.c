#include "main.h"

/**
 * print_line - functions that draws straigth
 * @n: function number
 * Return:
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	_putchar('\n');
	}
}
