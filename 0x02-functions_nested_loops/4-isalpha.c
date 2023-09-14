#include<stdio.h>
#include<ctype.h>

/**
  * _isalpha -Checks if character is uppercase or lowercase
  * @c: test character
  *Return: 1 if character is upper or lower case else 0
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
