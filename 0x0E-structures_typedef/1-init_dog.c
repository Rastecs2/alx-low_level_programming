#include "dog.h"

/**
 * init_dog - initialize dog structure
 *
 * @d: pointer to struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: ---
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;/*d->name = name;*/
		(*d).age = age;/*d->age = age;*/
		(*d).owner = owner;/*d->owner = owner;*/
	}
}
