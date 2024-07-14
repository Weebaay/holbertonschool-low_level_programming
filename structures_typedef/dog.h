#ifndef DOG_H
#define DOG_H

/**
* struct dog - Structure contenant les informations sur un chien
* @name: Nom du chien
* @age: Âge du chien
* @owner: Nom du propriétaire du chien
*
* Description: Cette structure contient les informations de base
* sur un chien, y compris son nom, son âge et le nom de son propriétaire.
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
