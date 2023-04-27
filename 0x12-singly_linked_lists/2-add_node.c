#include "lists.h"
/*
 * add_node - check the code
 * @head: parametre
 * @str: parametre
 * Return : head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
