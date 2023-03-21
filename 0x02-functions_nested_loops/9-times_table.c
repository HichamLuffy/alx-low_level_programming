#include "main.h"
/**
 *times_table - check the code
 *
 *Return: Always 0.
 */
void times_table(void)
{
	int i, n, j, d, u;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				u = n % 10;
				d = (n - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				else
				{
				_putchar(n + '0');
				}
			}
		}
		_putchar('\n');
	}
}
