#include "main.h"
/**
 *times_table - check the code
 *
 *Return: Always 0.
 */
void times_table(void)
{
	int i, n, j, d, u;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n >= 10)
			{
				u = n % 10;
				d = (n - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(u % 10 + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
				_putchar(n + '0');
				}
			}
		}
	}
	_putchar('\n');
}
