#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - check the code
 * @name: parametre
 * @f: parametre
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
