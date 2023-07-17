#include <stdlib.h>
#include "dog.h"

/**
 * len - length of string
 *
 * @s: string
 *
 * Return: length
 */
int len(const char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}

/**
 * scopy - copy string to new_string
 *
 * @st: string
 * @new_string: string to copy in
 *
 * Return: new_string
 */
char *scopy(char *new_string, char *st)
{
	int i;

	for (i = 0; st[i]; i++)
		new_string[i] = st[i];
	new_string[i] = '\0';

	return (new_string);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog's owner
 *
 * Return: struct pointer dog or null if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
}
