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
			srand(time(0));
				n = rand() - RAND_MAX / 2;
				int LD = n % 10;
				printf("Last digit of %d is", n);
				if (n > 5)
				       printf(" and is greater than 5");
				if (n < 6)
					printf(" and is less than 6 and not 0");
				if (n == 0)
					printf(" and is 0")
					return (0);
}
