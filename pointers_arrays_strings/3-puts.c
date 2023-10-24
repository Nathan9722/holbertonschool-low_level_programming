#include "main.h"

/**
 * _puts - printing a string followed by new line
 * @str: value of a string
 *
 */
void _puts(char *str)
{
	int str = 0;

	while (*str != '\0')
	{
		*str++;
	}
		_putchar ('\n');
}
