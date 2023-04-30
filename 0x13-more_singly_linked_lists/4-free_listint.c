#include "lists.h"
/**
 * free_listint - check your code
 * @head: parametre
 * Return: void
 */
void free_listint(listint_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->n);
		free(head);
		head = a;
	}
}
