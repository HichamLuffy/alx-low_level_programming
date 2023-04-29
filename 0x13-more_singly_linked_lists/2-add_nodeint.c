#include "lists.h"
/**
 * add_nodeint - check your code
 * @head: parametre
 * @n: parametre
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	next->next = *head;
	*head = new;
	return (new);
}
