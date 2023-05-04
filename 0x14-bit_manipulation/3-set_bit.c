#include "main.h"
/**
 * set_bit - check the code
 * n: parametre
 * index: parametre
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);
	bit = 1UL << index;
	*n |= bit;
	return (1);
}
