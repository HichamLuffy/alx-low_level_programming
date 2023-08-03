#include "main.h"
/**
 * clear_bit - check the code
 * @n: parametre
 * @index: parametre
 * Return: 1 || 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	if (index > 63)
		return (-1);
	bit = 1UL << index;
	*n &= ~bit;
	return (1);
}
