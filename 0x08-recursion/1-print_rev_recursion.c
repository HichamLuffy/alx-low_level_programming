#include "main.h"

/**
 * void _print_rev_recursion(char *s) - check the code
 *@s: parametre
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*S)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
