#include "main.h"

/**
  * print_last_digit -prints last digit of a number
  * @num: format of test number
  * Return: always 0
  */
int print_last_digit(int num)
{
	int dig;

	/*Converts the value of num into positive if negative*/
	if (num < 0)
	{
		num = -num;
	}
	dig = num % 10;

	if (dig < 0)
	{
		dig = -dig;
	}
	_putchar(dig + '0');
	return (dig);
}
