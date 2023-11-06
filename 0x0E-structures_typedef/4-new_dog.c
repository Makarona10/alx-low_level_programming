#include "dog.h"
#include <stdlib.h>

/**
* get_len - gets the length of a string
*
* @s: The string input to calculate the length of
*
* Return: The length of a string
*/

int get_len(char *s)
{
	int len = 0;

	if (s != NULL)
	{
		while (*s++ != '\0')
			len++;

		s -= (len + 1);
	}
	return (len);
}

/**
 * new_dog - creates a new dog of struct dog
 *
 * @name: The name of a new dog
 *
 * @age: The age of a new dog
 *
 * @owner: The new dog's owner's name
 *
 * Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);

	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(get_len(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = owner;
	if (ndog->owner == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
