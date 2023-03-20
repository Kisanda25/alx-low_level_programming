#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a struct with 3 attributes
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
