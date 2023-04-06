#include "main.h"
/**
 * _strlen_recursion - check the code
 *@s: parametre
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
