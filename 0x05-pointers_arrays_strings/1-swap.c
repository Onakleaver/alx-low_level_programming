#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: tested character
 * @b: tested character
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
