#include "main.h"

/**
 * _isupper - fonction that checks for uppercase character
 *@c: character to be checked
 *
 * Return: if "c" is uppercase return 1 otherwise 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
