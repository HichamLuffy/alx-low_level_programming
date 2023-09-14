#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the node
 * @n: integer
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*h == NULL)
		*h = new;
	else if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	else
	{
		tmp = *h;
		while (idx > 0)
		{
			tmp = tmp->next;
			idx--;
		}
	}
	tmp->prev->next = new;
	new->prev = tmp->prev;
	tmp->prev = new;
	new->next = tmp;
	return (new);
}
