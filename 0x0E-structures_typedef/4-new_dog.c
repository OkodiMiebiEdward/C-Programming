#include <stdlib.h>
#include "dog.h"

/**
 * checkLength - checks length of string
 * @s: the string argument
 * Return: the number of characters
 */
int checkLength(char *s)
{
	int g = 0;

	while (s[g] != '\0')
	{
		g++;
	}

	return (g);
}

/**
 * *copyString - fxn copies pointed string
 * @dest: the destination
 * @src: the source
 * Return: a pointer
 */
char *copyString(char *dest, char *src)
{
	int w, s;

	w = 0;

	while (src[w] != '\0')
	{
		w++;
	}

	for (s = 0; s < w; s++)
	{
		dest[s] = src[s];
	}
	dest[s] = '\0';

	return (dest);
}

/**
 * new_dog - makes new instance of dog
 * @name: the name member
 * @age: the age memeber
 * @owner: the owner memeber
 * Return: a pointer to the new dog is returned
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*creates new instance of dog*/
	dog_t *dog;
	int first, second;

	first = checkLength(name);
	second = checkLength(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (first + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (second + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	copyString(dog->name, name);
	copyString(dog->owner, owner);
	dog->age = age;

	return (dog);
}

