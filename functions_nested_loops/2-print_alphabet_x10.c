#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)

{
	char letter;

	while (letter < 9)
	{

	for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		}
	}
	_putchar('\n');
}
