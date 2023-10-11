#include <stdlib.h>
#include "dog.h"
#include "main.h"
/**
  * init_dog -functon for dog info
  * @d: dog infomation
  * @name: name of dog
  * @age: age of dog
  * @owner: name of owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

