#include "main.h"
/**
 *puts2 - check the code
 *@str: parametre
 *Return: Always 0.
 */
void puts2(char *str)
{
	int j = 0;
	int i;

	while (str[j] != '\0')
		j++;
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	putchar('\n');
}
