#include "lists.h"
/**
 * list_len - check code
 *@h: parametre
 *
 * Return: sum
 */
size_t list_len(const list_t *h)
{
        size_t sum = 0;

        while (h)
        {
                h = h->next;
                sum++;
        }
        return (sum);
}
