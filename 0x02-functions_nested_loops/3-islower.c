#include "main.h"

/**
 *_islower -Checks if entered character is lower
 *@c: character to be tested
 *Return: 1 if character is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
