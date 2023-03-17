#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int LD = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", LD);
	if (LD > 5)
		printf(" and is greater than 5");
	if (LD < 6 && LD != 0)
		printf(" and is less than 6 and not 0");
	if (LD == 0)
		printf(" and is 0");
	printf("\n")
	return (0);
}
