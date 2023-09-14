#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list_t list
 * @h: the list to print
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    size_t n = 0;

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
        n++;
    }
    return (n);
}