#ifndef DOG_H
#define DOG_H
#include "main.h"

/**
*@struct - dog containt information about dog
*
*The dog structure contains information about a dog,
including its name,its age and the name of its owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}
dogt_t;

#endif
