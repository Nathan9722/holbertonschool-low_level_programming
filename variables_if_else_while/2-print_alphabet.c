#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - launch program to print the alphabet
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet++;
	}

	putchar('\n');
	return (0);
}
