#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is ", n);
	if (a > 5)
	{
		printf("%d and is grater than 5\n", a);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", a);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", a);
	}

	return (0);
}
