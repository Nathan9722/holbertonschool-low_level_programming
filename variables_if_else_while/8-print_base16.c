#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - launch program to print base seize hexadecimal
 * Return: 0
 */

int main(void)
{
	int hexa;

	for (char hexa = '0'; hexa <= '9'; hexa++)
	{
	putchar(hexa);
	}

	for (char hexa = 'a'; hexa <= 'f'; hexa++)
	{
	putchar(hexa);
	}

putchar('\n');
return (0);
}
