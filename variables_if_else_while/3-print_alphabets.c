#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - launch program to print the alphabet in lowercase followed by uppercase
 * Return: 0
 */

int main(void){
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z') {

	putchar(lower);
        lower++;
	}
	
	while (upper <= 'Z'){

	putchar(upper);
	upper++;
	}

putchar('\n');
return 0;
}
