#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 *@d: parametre
 *@name: parametre
 *@age: parametre
 *@owner: parametre
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
