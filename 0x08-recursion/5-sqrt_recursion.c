#include "main.h"

/**
   * _sqrt_help -function to help get the natural squreroot
   * @n: number being tested
   * @guess: guess of which number is correct
   * Return: -1 if not correct
   */
int _sqrt_help(int n, int guess)
{
	if (n == guess * guess)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_help(n, guess + 1));
	}
}

/**
  * _sqrt_recursion -prints the squreroot of a number
  * @n: number to be tested
  * Return: sqrt
  */
int _sqrt_recursion(int n)
{
	int guess = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{

		return (_sqrt_help(n, guess));
	}
}
