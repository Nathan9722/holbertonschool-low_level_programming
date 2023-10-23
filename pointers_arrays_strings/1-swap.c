#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
