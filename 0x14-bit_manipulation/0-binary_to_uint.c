#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: parametre
 *
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}
	return (num);
}
