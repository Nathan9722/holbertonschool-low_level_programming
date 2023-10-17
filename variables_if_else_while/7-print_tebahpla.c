#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - launch program to print alphabet in reverse
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
putchar('\n');
return (0);
}
