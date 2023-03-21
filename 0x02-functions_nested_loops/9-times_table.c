#include "main.h"
/**
 *times_table - check the code
 *
 *Return: Always 0.
 */
void times_table(void)
{
	int i, n, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (j == 0)
			{
				_putchar(j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
	}
	_putchar('\n');
}
