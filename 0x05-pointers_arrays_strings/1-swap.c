#include "main.h"

/**
 * swap_int - swaps values of two int variables
 * @a: Variable to be tested
 * @b: Variable to be tested
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
