#include "dog.h"
#include "main.h"

/**
*init_dog - initialize variable of type
*@d: pointer to a dog structure
*@name:pointer to a character string representing the dog's name
*@age: float representing the dog's age
*@owner:pointer to a character string representing the name of the dog's owner
*
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
