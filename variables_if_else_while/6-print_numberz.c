#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program to prints all single digit numbers of 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar('0' + num);
	}
putchar('\n');
return (0);
}
