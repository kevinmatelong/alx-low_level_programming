#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}

	arr = (char *) malloc(length * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}

/**
 * new_dog - creates a new dog
 * @name: kevo's name
 * @age: kevo's age
 * @owner: kevo's owner
 * Return: new_dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *kevo;
	char *kevo_name, *kevo_owner;

	kevo = malloc(sizeof(dog_t));
	if (kevo == NULL)
		return (NULL);

	kevo_name = _strdup(name);
	if (kevo_name == NULL)
	{
		free(kevo);
		return (NULL);
	}

	kevo_owner = _strdup(owner);
	if (kevo_owner == NULL)
	{
		free(kevo_name);
		free(kevo);
		return (NULL);
	}
	kevo->name = kevo_name;
	kevo->age = age;
	kevo->owner = kevo_owner;
	return (kevo);
}
