#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flags = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
            if (flags == 1)
                printf(", ");
			printf("'%s': '%s'", node->key, node->value);
            flags = 1;

		}


	}
	printf("}\n");
}
