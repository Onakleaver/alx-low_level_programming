#include "main.h"
#include <stdio.h>

/**
 * _isupper -Checks if input characters are in upper case
 *@c: Character to be tested
 * Return: 1 when true and 0 when false
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
