#include <stdio.h>
#include "main.h"

/**
 * _puts - printing a string followed by new line
 * @str: value of a string
 *
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
		_putchar ('\n');
}
