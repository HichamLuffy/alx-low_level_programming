#include "lists.h"
/**
 * reverse_listint - check your code
 * @head: parametre
 *
 * Return: head
 */
listint_t *reverse_listint(listint_t *head)
{
	listint_t *next == NULL;
	listint_t *prev == NULL;

	if (!head)
		return (NULL);
	while (head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
