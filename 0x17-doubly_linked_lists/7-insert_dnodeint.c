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
    if (idx == 0)
    {
        new->n = n;
        new->next = *h;
        new->prev = NULL;
    }
    
    tmp = *h;
    while (idx > 0)
    {
        tmp = tmp->next;
        idx--;
    }
    new->n = n;
    new->next = tmp;
    new->prev = tmp->prev;
    tmp->prev->next = new;
    tmp->prev = new;
    
	return (new);
}
