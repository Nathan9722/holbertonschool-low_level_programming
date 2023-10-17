#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - launch program to print the alphabet and avoid q and e
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
		putchar(letter);
		}
	}
	return (0);
}
