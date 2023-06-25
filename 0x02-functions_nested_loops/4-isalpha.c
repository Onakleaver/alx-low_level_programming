#include "main.h"

/**
 *_isalpha -Checks if characters are alphabetical
 *@c: Character to be tested
 *Return: 1 if is alphabetic character else o
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
