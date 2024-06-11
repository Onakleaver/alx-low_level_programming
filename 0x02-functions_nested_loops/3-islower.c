#include<stdio.h>
#include<ctype.h>

/**
  * _islower - Checks in character is lowercase
  * @c: alphabet letter
  * Return: 1 if it is lowercase else 0
  */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
