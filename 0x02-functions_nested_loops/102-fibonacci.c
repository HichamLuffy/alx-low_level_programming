#include <stdio.h>
/**
 *main - check the code.
 *
 *Return: Always 0.
 */
int main(void)
{
	long num1, num2, nextnum, i;

	num1 = 1;
	num2 = 2;
	printf("%d, %d, ", num1, num2);
	for (i = 3; i <= 50; i++)
	{
		nextnum = num1 + num2;
		printf(", %d", nextnum);
		num1 = num2;
		num2 = nextnum;
	}
	printf("\n");
	return (0);
}
