#include "lists.h"

/**
 * dlistint_len - computing the length of a double linked list
 * @h: the head
 * Return: the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cur = h;
	size_t size = 0;

	while (cur != NULL)
	{
		cur = cur->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: the head
 * @idx: index to insert at
 * @n: data n for the new node
 * Return: pointer the newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *cur, *next;

	if (h == NULL || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	cur = *h;
	while (idx > 1)
	{
		cur = cur->next;
		idx--;
	}

	next = cur->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = cur;
	new->next = next;
	cur->next = new;
	next->prev = new;

	return (new);
}
