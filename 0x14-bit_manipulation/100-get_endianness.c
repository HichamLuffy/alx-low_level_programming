#include "main.h"
/**
 * get_endianness - check the code
 * Return: void
 */
int get_endianness(void)
{
	unsigned int a;
	char *b = (char *) &a;

	if (*b)
		return (1);
	else
		return (0);
}
