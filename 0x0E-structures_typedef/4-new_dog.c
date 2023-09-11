#include "dog.h"
#include <stdlib.h>
/**
* new_dog - function that creates a new struct of type dog
*
* @name: parameter name as struct
* @age: parameter age as struct
* @owner: parameter owner as struct
*
* Return: returns pointer to new dog of datatype dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int new_len, blen, i;
dog_t *doggy;

new_len = blen = 0;
while (name[new_len++])
;
while (owner[blen++])
;
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);

doggy->name = malloc(new_len *sizeof(doggy->name));
if (doggy == NULL)
return (NULL);
for (i = 0; i < new_len; i++)
doggy->name[i] = name[i];

doggy->age = age;

doggy->owner = malloc(blen * sizeof(doggy->owner));
if (doggy == NULL)
return (NULL);
for (i = 0; i < blen; i++)
doggy->owner[i] = owner[i];
return (doggy);
}
