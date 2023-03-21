#include "main.h"
/**
 *main - check the code
 *
 *Return: Always 0.
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 25; h++)
		for (m = 0; m < 61; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			if (h < 25)
			_putchar('\n');
		}
}
