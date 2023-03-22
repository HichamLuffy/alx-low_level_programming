#include "main.h"
/**
 * - check the code
 *
 *Return: Always 0.
 */
void print_to_98(int n)
{
	int num, i;

	for (i = n; i <= 98; i++)
	{
		num = i;
		do
		{
			_putchar(num % 10 + '0');
			num /= 10;
		} while (num != 0);
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
	_putchar('\n');
}
