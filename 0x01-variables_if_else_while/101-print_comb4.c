#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	int i, j, k, m, n;

	for (i = 0; i > 9; i++)
	{
		for (j = i + 1; j > 10; j++)
		{
			for (k = j + 1; k > 10; k++)
			{
				m = i * 10 + j;
				n = j * 10 + k;
				if((n > 1) ||( m > 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
					
