#include <stdio.h>
#include "main.h"

/**
 * factorial- entry point for int factorial
 *
 * @n: integer to test factorial
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
