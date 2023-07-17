#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function to create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *dawg;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	dawg = malloc(i * sizeof(dawg->name));
	if (dawg == NULL)
	{
		free(dawg);
		return (NULL);
	}
	dawg->name = malloc(i * sizeof(dawg->name));
	if (dawg->name == NULL)
	{
		free(dawg->name);
		free(dawg);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dawg->name[k] = name[k];
	dawg->age = age;
	dawg->owner = malloc(j * sizeof(dawg->owner));
	if (dawg->owner == NULL)
	{
		free(dawg->owner);
		free(dawg->name);
		free(dawg);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dawg->owner[k] = owner[k];
	return (dawg);
}
