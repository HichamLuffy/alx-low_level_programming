#include "main.h"
#include <stdlib.h>
/**
 * create_array - check the code
 * size: parametre
 * c: parametre
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(size);
	if ( size == 0 )
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
