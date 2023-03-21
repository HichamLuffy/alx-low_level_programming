#include "main.h"
/**
 *print_alphabet - Entry point
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;
	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		i++;
		_putchar('\n');
	}
}
