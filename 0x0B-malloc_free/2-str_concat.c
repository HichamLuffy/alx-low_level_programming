#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check the code
 * @s1: parametre
 * @s2: parametre
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *som;
	int i, k;

	if (!s1)
		s1 = " ";
	if (!s2)
		s2 = " ";
	i = 0;
	while (s1[i] != '\0')
		i++;
	k = 0;
	while (s2[k] != '\0')
		k++;
	som = malloc(sizeof(char) * (i + k + 1));
	if (som == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		som[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		som[i] = s2[k];
		i++;
		k++;
	}
	som[i] = '\0';
		return (som);
}
