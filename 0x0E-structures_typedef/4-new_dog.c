#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: The destination the string will be copied to
 *
 * @src: The string will be copied
 *
 * Return: The string that has been copied
*/


char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}


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
	dog_t *ndog;

	if (!name || age < 0 || !owner)
		return (NULL);

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc(get_len(name) + 1);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(get_len(owner) + 1);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	ndog->name = name;
	ndog->owner = owner;
	ndog->age = age;

	return (ndog);
}
