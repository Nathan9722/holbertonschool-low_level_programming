#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: value raised
 * @y: power
 * 
 * Return: power of y 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

