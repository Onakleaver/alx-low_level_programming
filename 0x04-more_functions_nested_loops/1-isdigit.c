#include "main.h"
#include <stdio.h>

/**
 * _isdigit -Checks for digit 0 through 9
 * @c: Character to be tested
 * Return: 1 if true otherwise returns 0
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
