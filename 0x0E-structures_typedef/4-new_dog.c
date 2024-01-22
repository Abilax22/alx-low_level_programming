#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - this code return length of a string
 * @s: string to evaluate
 * Return: length of string
 */

int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	return (e);
}

/**
 * *_strcpy - this code copies the string pointed by src
 * with terminating null byte (\0)
 * to the buffer pointed by dest
 * @dest: pointer to buffer which copy the string
 * @src: string to copy
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, e;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (e = 0; e < len; e++)
	{
		dest[e] = src[e];
	}
	dest[e] = '\0';
	return (dest);
}

/**
 * new_dog - this creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog (Success),else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
