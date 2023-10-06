#include "hash_tables.h"

void free_node(hash_node_t *node)
{
    free(node->value);
}
void free_table(hash_table_t *ht)
{
    hash_node_t *tmp;
    unsigned long int i = 0;
    for (i = 0; i < ht->size; i++)
    {
        tmp = ht->array[i];
        if (tmp)
            free_node(tmp);
    }
    free(ht->array);
    free(ht);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *tmp, *curr;

	if (ht == NULL)
		return;
	size = ht->size;

	while (i < size)
	{
		curr = ht->array[i];
		while (curr)
		{
			tmp = curr;
			curr = curr->next;
			free(tmp->value);
			free(tmp);
		}
		i++;

	}
    free(ht->array);
    free_table(ht);
    free(ht);
}
