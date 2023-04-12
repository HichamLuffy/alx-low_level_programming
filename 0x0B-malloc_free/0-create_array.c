#include "main.h"
#include <stdlib.h>
/**
 *create_array - check the code
 *@c: char
 *@size: unsigned int
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
