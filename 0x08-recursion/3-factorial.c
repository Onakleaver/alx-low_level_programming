#include "main.h"

/**
* factorial -retuns the factorial of a number
* @n: number to be tested
* Return: 1 if n is 0 and -1 if less than 0
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
