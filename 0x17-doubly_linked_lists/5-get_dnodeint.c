#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: index of the node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	tmp = head;
	while (index > 0)
	{
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}
