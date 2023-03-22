#include <stdio.h>
/**
 *main - check the code.
 *
 *Return: Always 0.
 */
int main(void)
{
	int i, u;

	i = 1;
	while (i <= 50)
	{
		printf("%d, ", i);
		u = i - 1;
		i = u + i;
		printf("%d, ", i);
		i++;
	}
	printf("\n");
	return (0);
}
