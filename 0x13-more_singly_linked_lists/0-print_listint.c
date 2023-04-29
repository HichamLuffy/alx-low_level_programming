#include "lists.h"
/**
 * print_listint - check your code
 * @h: parametre
 *
 * Return: num
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
