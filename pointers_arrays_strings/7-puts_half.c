#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: pointers
 *
 */
void puts_half(char *str)
{
	int strl = strlen(str);

	int i;

	if (strl % 2 == 0)
	{
		i = strl / 2;
	}
	else
	{
		i = (strl - 1) / 2;
	}
	for (; i < strl; i++)
	{
		_putchar(str[i]);
	}
	_putchar(str[i]);
}
