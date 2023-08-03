#include "main.h"
/**
 * print_binary - check your code
 * @n : parametre
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, a = 0;
	unsigned long int tmp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		tmp = n >> i;
		if (tmp & 1)
		{
			_putchar('1');
			a++;
		} else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
