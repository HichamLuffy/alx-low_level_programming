#include "main.h"
#include <stdio.h>

/**
 *print_array - prints array
 *@a: is a parameter
 *@n: is a parameter
 *Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
