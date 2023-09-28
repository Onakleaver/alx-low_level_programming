#include "main.h"
#include<math.h>

/**
  * _sqrt_recursion -prints the squreroot of a number
  * @n: number to be tested
  * Return: sqrt
  */
int _sqrt_recursion(int n)
{
	if (sqrt(n) < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
