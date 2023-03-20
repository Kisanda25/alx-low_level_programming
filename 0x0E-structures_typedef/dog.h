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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
