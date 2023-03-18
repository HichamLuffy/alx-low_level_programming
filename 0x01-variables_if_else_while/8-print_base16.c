#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
		putchar('0' + n);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
