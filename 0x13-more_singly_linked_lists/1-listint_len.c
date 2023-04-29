#include "lists.h"
/**
 * listint_len - check your code
 * @h: parametre
 *
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
