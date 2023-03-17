#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char p, C;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
