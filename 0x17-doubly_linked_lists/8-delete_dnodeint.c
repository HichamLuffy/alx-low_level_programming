#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (*head == NULL)
		return (0);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	tmp = *head;
	while (index > 1)
	{
		tmp = tmp->next;
		index--;
	}

	if (tmp->next == NULL)
		return (0);

	tmp->next = tmp->next->next;
	free(tmp->next->prev);
	tmp->next->prev = tmp;
	return (1);
}
