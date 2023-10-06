#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, flags = 0, size;
	hash_node_t *node;

	if (ht == NULL)
		return;
	size = ht->size;
    printf("{");
	while (i < size)
	{
		node = ht->array[i];
		while (node)
		{
            if (flags == 1)
                printf(", ");
			printf("'%s': '%s'", node->key, node->value);
            flags = 1;
            node = node->next;

		}
        i++;


	}
	printf("}\n");
}
