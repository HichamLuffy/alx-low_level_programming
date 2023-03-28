#include "main.h"
/**
 *rev_string - check the code
 *@s: parametre
 *Return: Always 0.
 */
void rev_string(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	for (a = a - 1; a >= 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
