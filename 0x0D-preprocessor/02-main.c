#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
  * main -prints name of copiled file
  * Return: 0
  */
int main(void)
{
	char *name;
	int i;

	name = malloc (sizeof(char) + 1);
	if (name == NULL)
	{
		return (1);
	}
	i = 0;
	name = __FILE__;
	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
