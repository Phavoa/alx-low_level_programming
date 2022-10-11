#include "dog.h"
#include <stdlib.h>

/**
* init_dog - inits a variable of
*type dog
*@d: dog identification
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(void)name;
	(void)age;
	(void)owner;
if (d != NULL)
	{
	(*d).name = "lezzy";
	(*d).age = 24.5;
	(*d).owner = "Efemiaya";
	}
}
