#include "main.h"
/**
 * _islower - check if c is lowercase
 *
 *Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
