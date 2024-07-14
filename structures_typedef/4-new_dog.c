#include "dog.h"

/**
 * new_dog - Crée un nouveau chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le nom du propriétaire du chien
 *
 * Return: Un pointeur vers la nouvelle instance de `dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		d->name = malloc(i + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		 d->name[i] = name[i];

	d->name[i] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
		d->owner = malloc(i + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];

	d->owner[i] = '\0';
	d->age = age;

	return (d);
}
