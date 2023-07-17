#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create  structure dog
 * @name: var for char  name's dog
 * @age: var for float  age's dog
 * @owner: var for char  owner's dog
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);



#endif
