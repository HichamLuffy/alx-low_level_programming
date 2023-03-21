#include "main.h"
/**
 *main - check the code
 *
 *Return: Always 0.
 */
void jack_bauer(void)
{
	for (h = 0; h < 25; h++)
		for (m = 0; m < 61; m++)
		{
			putchar(h / 10 + '0');
			putchar(h % 10 + '0');
			putchar(':');
			putchar(m / 10 + '0');
			putchar(m % 10 + '0');
			if (h < 24)
			putchar('\n');
		}
	return (0);
}
