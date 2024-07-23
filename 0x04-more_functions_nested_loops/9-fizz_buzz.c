#include <stdio.h>

/**
 * main -prints 1-100 but for multiples of 3 print fizz and for 5 buzz and multiples of both fizz buzz
 * Return: Always 0
 */

int main()
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if (a%3 == 0)
		{
			if (a%3 && a%5 == 0)
			{
				printf("FizzBuzz");
			}
			printf("Fizz");
		}
		else if (a%5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		printf("\n");
	}
	return (0);
}
