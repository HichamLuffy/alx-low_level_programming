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
	for (x = 79; x < 102; x++)
		putchar('0' + x);
	return (0);
}
