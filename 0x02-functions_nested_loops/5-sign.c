#include "main.h"
/**
 *print_sign - check the code.
 *@n: parametre
 *Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
