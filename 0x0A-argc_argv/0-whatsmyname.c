#include <stdio.h>
#include "main.h"

/**
* main -code entry point
* @argc: argument count
* @argv: argument vector
* Return: always 0
*/

int main(int argc, char *argv[])
{
	char *a;

	(void)argc;
	a = argv[0];
	printf(*a);
	return (0);
}
