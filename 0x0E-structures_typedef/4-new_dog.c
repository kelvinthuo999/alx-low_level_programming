#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	/* Calculate the length of the name and owner strings */
	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\0')
		owner_len++;

	/* Allocate memory for the name and owner strings */
	ndog->name = malloc((name_len + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc((owner_len + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	/* Copy the name and owner strings */
	for (i = 0; i <= name_len; i++)
		ndog->name[i] = name[i];

	for (i = 0; i <= owner_len; i++)
		ndog->owner[i] = owner[i];
	ndog->age = age;
	return (ndog);
}
