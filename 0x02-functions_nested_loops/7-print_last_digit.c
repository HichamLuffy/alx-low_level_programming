#include "main.h"
/**
 *main - check the code
 *@i: parametre
 *Return: Always 0.
 */
int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	_putchar(last_digit + '0');
	return last_digit;
}
