#include <stdio.h>

/**
* main -code entry point
* @argc: commandline argument count
* @argv: commandline argument vectors
* Return: always 0
*/
int main(int argc, char **argv)
{
	(void)*argv;

	printf("%d\n", argc);

	return (0);
}
