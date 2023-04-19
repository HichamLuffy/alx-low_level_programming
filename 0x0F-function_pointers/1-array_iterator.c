#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - check the code
 * @array: parametre
 * @size: parametre
 * @action: parametre
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
