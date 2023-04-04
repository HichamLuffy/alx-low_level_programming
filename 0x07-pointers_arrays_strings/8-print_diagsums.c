#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - check the code
 *@a: parametre
 *@size: parametre
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum1;
	unsigned int sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;

	while (i < size)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
