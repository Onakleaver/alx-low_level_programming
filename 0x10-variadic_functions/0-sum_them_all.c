#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all -sums up input
  * @n: number of variables
  * Return: the sum
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;
	/**initializes the argument list**/
	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		/** adds the variable in the list and stores it in sum**/
		/** gets the next argument in the list using va_arg(ap,int)**/
		sum += va_arg(ap,int);
	}
	va_end(ap);/**ends the argument list**/
	return (sum);
}
