#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name -prints a string name
  * @name: pointer to string
  * @f: pointer to void type
  * Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	int i;

	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	f(name);
}
