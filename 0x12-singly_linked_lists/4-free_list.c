#include "lists.h"
/**
 * free_list - check code
 * @head: parametre
 * Return
 */
void free_list(list_t *head)
{
	list_t *a;

	while (head)
	{
		a = head->next;
		free(head->str);
		free(head);
		head = a;
	}
}
