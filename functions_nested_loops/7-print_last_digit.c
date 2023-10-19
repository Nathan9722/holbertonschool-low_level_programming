#include "main.h"

/**
 * print_last_digit - prints the last digit of a numbe
 * @o: function parameter
 * Return: y
*/

int print_last_digit(int o)
{
	int y;
	y = o % 10;
	if (o < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
