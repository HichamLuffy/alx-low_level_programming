#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: The size of the array
 * Return: hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = (shash_table_t *)malloc(sizeof(shash_table_t));
	unsigned long int i;

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **) calloc(ht->size, sizeof(hash_node_t *));
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
	return (ht);
}

/**
 * hash_table_set - create a element in the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *curr_value;
	unsigned long int index, i;

	if (ht == NULL || *key == '\0' || key == NULL || value == NULL)
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
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = curr_value;
	new_node->snext = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * hash_table_get - get a value of a key
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->snext;
	}
	return (NULL);
}

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0, flags = 0;
	shash_node_t *node;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (flags == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
            flags = 1;
            node = node->snext;
		}
		i++;


	}
	printf("}\n");
}


void shash_table_print_rev(const shash_table_t *ht)
{
    unsigned long int i = 0, flags = 0;
    shash_node_t *node;

    if (!ht)
        return;
    node = ht->stail;
    printf("{");
    while (node)
    {
        printf("'%s': '%s'", node->key, node->value);
        node = node->sprev;
        if (node != NULL)
			printf(", ");

    }
    printf("}\n");

}
