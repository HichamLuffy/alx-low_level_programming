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
	ht->array = (shash_node_t **) calloc(ht->size, sizeof(shash_node_t *));
	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;
    ht->shead = NULL;
    ht->stail = NULL;
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
    shash_node_t *new_node, *current, *prev = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            if (current->value == NULL)
                return (0);
            return (1);
        }

        if (strcmp(current->key, key) > 0)
            break;

        prev = current;
        current = current->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = current;

    if (prev == NULL)
    {
        ht->array[index] = new_node;
    }
    else
    {
        prev->next = new_node;
    }

    /* Update the sorted linked list */
    if (prev == NULL)
    {
        new_node->snext = ht->shead;
        ht->shead = new_node;
    }
    else
    {
        new_node->snext = prev->snext;
        prev->snext = new_node;
    }

    return (1);
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->snext;
    }

    return (NULL);
}

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

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}


void shash_table_delete(shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *tmp, *curr;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        curr = ht->array[i];
        while (curr)
        {
            tmp = curr;
            curr = curr->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }

    free(ht->array);
    free(ht);
}
