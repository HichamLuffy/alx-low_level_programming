#include "main.h"
/**
 *print_last_digit - check the code
 *@i: parametre
 *Return: Always 0.
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (last_digit < 0)
	{
		_putchar(-last_digit + '0');
		return (-last_digit);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
