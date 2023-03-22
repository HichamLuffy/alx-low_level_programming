#include "main.h"
/**
 * - check the code
 *
 *Return: Always 0.
 */
void print_to_98(int n)
{
	int num, i;

	num = i;
	for (i = n; i <= 98; i++)
	{
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
	putchar('\n');
}
