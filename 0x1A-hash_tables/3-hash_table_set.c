#include "hash_tables.h"
/**
 * hash_table_set - create a element in the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *curr_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	curr_value = strdup(value);
	if (curr_value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = curr_value;
			return (1);
		}

	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(curr_value);
		return (0);
	}
	new_node->value = curr_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
