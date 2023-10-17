#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - launch program to print base seize hexadecimal
 * Return: 0
 */

int main(void)
{
	int num;
	int letter;

	for (char num = '0'; num <= '9'; num++)
	{
	putchar(num);
	}
	for (char letter = 'a'; letter <= 'f'; letter++)
	{
	putchar(letter);
	}

putchar('\n');
return (0);
}
