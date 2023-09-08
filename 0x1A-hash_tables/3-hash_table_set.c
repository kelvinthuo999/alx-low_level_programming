#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: hash table to add or update the key/value to.
 * @key: key (cannot be an empty string).
 * @value: value associated with the key (duplicated, can be an empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Duplicate the value if it's not an empty string */
			free(current->value);
			current->value = (value != NULL) ? strdup(value) : NULL;
			if (current->value == NULL && value != NULL)
				return (0);
			return (1); /* Success, updated existing key */
		}
		current = current->next;
	}
	/* collision handling */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = (value != NULL) ? strdup(value) : NULL;
	if (new_node->value == NULL && value != NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1); /* Success, added new key */
}
