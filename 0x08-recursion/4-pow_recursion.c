#include "main.h"
#include <math.h>

/**
* _pow_recursion - finds the power of two numbers
* @x: initial number
* @y: number of times the function should be multiplied
* Return: the value of the power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
