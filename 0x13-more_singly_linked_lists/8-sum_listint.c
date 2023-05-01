#include "lists.h"
/**
 * sum_listint - check your code
 * @head: parametre
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
