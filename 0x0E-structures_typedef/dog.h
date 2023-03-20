#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - creates a struct with 3 attributes
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
*dog_t *new_dog(char *name, float age, char *owner);
*void free_dog(dog_t *d);
*void print_dog(struct dog *d);
*/

#endif
