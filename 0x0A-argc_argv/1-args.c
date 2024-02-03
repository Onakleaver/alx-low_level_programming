#include <stdio.h>

/**
* main -code entry point
* @argc: commandline argument count
* @argv: commandline argument vectors
* Return: always 0
*/
int main(int argc, char **argv)
{
	int i;

	(void)*argv;/*unused variable*/
	i = argc - 1;/*holds the value of the number of arguments passed to the file*/
	printf("%d\n", i);

	return (0);
}
