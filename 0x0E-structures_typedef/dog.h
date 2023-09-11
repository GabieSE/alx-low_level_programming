#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog metadata
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: dog owner
 *
 * Description: defines data about the dog and type of dog's struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
