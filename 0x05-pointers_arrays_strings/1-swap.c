#include <stdio.h>
#include <string.h>
/**
 *swap_int - check the code
 *@a: parametre
 *@b: parametre
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
