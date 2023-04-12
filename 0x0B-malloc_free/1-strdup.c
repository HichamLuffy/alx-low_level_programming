#include "main.h"
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: parametre
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *a;
	int i;
	int j;

	if (!str)
		return (NULL);	
	i = 0;
	while (str[i] != '\0')
		i++;
	a = malloc(sizeof(char) * i);
	for (j = 0; str[j]; j++)
		a[j] = str[j];
	return (a);
}
