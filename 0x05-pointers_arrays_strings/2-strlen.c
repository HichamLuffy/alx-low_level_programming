#include <stdio.h>
#include <string.h>
/**
 *int _strlen - check the code
 *@s :parametre
 *Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
