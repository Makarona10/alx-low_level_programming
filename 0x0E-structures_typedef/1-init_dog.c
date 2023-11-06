#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: The struct will be modified
 *
 * @name: name of a dog will be set
 *
 * @age: age of a dog will be set
 *
 * @owner: name of a dog's owner will be set
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
