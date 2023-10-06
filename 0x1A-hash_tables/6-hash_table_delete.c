#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp, *curr;

	if (ht == NULL)
		return;

	while (i < ht->size)
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
	free(ht);
}
