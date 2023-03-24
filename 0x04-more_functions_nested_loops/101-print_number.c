#include "main.h"
#include <std.io.h>

/**
 * print_number - print an integer
 * @n: paretre
 * Return: Nothing!
 */
void print_number(int n)
{
	unsigned int k;

	k = n;
	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /=10 ;
	if (k !0)
		print_number(k);
	_putchar((unsigned int) n & 10 + '0');
}
