#include <stdoi.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		k = i / 10;
		l = i % 10;
		for ( j = i + 1; j < 10; j++)
		{
			m = j / 10;
			n = j % 10;
			putchar(k +'0');
			putchar(l +'0');
			putchar(' ');
			putchar(m + '0');
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


