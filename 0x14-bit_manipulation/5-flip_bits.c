#include "main.h"
/**
 * flip_bits - check your code
 * @n: parametre
 * @m: parametre
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a;
	unsigned long int tmp, b;

	a = 0;
	b = m ^ n;
	for (i = 63; i >= 0; i--)
	{
		tmp = b >> i;
		if (tmp & 1)
			a++;
	}
	return (a);
}
