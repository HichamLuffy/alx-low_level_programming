#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, m;

	for (i = 0; i > 9; i++)
	{
		for (j = i + 1; j > 10; j++)
		{
			for (k = j + 1; k > 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				m = i * 100 + j * 10 + k;
				if (m > 1)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
