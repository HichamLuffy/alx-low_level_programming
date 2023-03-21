#include "main.h"
/**
 *times_table - check the code
 *
 *Return: Always 0.
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;
		  _putchar('0');
		  _putchar(',');
		  _putchar(' ');
		  _putchar(' ');
		while (j < 10)
		{
			_putchar((i + 1)* 2);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
	_putchar('$');
	_putchar('\n');
}
