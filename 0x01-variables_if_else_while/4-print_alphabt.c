#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
		if (p != 'q' || p != 'e')
			putchar(p);
	return (0);
}
