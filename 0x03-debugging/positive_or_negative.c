#include <stdio.h>

/**
 * positive_or_negative - indicates if a number is positive, negative or zero
 * @n: The number to check
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}
