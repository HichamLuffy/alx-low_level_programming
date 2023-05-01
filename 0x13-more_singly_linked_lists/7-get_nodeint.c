#include "lists.h"
/**
 * get_nodeint_at_index - check your code
 * @head: parametre
 * @index: parametre
 * Return: num
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (!temp)
		return (NULL);
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
