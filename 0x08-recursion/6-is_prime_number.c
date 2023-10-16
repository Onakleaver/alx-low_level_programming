#include "main.h"

/**
* is_prime_number -checks if number is a prime number
* @n: test number
* Return: 1 if is prime and 0 if not
*/
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i >= n/2)
	{
		return (1);
	}
	else
	{
		return (is_prime_number(n));
	}
}	
