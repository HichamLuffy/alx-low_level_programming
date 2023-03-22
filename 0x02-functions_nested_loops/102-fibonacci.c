#include <stdio.h>
/**
 *main - check the code.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i, n;
	for (i = 1; i <= 50; i = (i - 1) + i)
		printf("%d, ", i);
	printf("\n");
}
