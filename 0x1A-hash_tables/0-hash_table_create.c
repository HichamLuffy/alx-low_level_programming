#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = (hash_table_t *)malloc(sizeof(hash_table_t));
    unsigned long int i;

    if (ht == NULL)
        return (NULL);
    ht->size = size;
    ht->array = (hash_node_t **) calloc(ht->size, sizeof(hash_node_t *));
    for (i = 0; i < ht->size; i++)
        ht->array[i] = NULL;
    return (ht);
}