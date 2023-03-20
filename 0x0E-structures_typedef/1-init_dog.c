#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initializes a struct
 * @d: the struct that will be initialized
 * @name: first var
 * @age: second var
 * @owner: third var
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

}
