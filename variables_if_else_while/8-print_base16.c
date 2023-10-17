#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - launch program to print base seize hexadecimal
 * Return: 0
 */

int main(void)
{
	int num;
	int letter;

	for (char num = 48; num <= 57; num++)

		putchar(num);

	for (char letter = 97; letter <= 102; letter++)

		putchar(letter);

	putchar('\n');

	return (0);
}
