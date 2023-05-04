#include "main.h"
/**
 * get_bit - check the code
 * @n: parametre
 * @index: parametre
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
