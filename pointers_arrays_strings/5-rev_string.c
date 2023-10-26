#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string
 *
 */

void rev_string(char *s)
{
	int str = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = str - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
