#include "dog.h"
#include <stdlib.h>
/**
* free_dog - Frees dogs.
* @d:pointer to The dog to be freed.
* Return: void.
*/
void free_dog(dog_t *d)
{
if (d == 0)
return;
free(d->owner);
free(d->name);
free(d);
}
