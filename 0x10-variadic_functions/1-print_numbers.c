#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"

/**
  * print_numbers -prints numbers followed by a new line
  * @separator: string printed between numbers
  * @n: of integes passed in function
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int num;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}