#include "main.h"
#include <stdlib.h>
/**
  * create_array -entry point
  * @size: size of memory to be allocated
  * @c: pointer to malloc
  * Return: NULL if size = 0 or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;/*pointer for malloc to return with memory*/
	unsigned int i;/*integer used to move within the array*/

	/*Below satisfies the requirement of NULL return if size = 0*/
	if (size == 0)
	{
		return (NULL);
	}

	/*Below allocates memory of size of char that has null taminator*/
	ptr = malloc(sizeof(char) * size);
	/*important to check the return value of malloc, this dose so*/
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*Below initializes the array created with specific character*/
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);/*returns the pointer to the array*/
}
