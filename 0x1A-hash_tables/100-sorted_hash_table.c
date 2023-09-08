#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table, or NULL if an error occurs.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the sorted hash table structure */
	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of shash_node_t pointers */
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table); /* Clean up on failure */
		return (NULL);
	}

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (duplicated, can be an empty string).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current, *prev;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Get the index where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists, and if so, update its value */
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

	/* Create a new node and add it to the sorted linked list */
	new_node = malloc(sizeof(shash_node_t));
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

	/* Insert the new node into the sorted linked list by key */
	current = ht->shead;
	prev = NULL;
	while (current != NULL && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}

	new_node->next = current;
	if (prev != NULL)
		prev->snext = new_node;
	else
		ht->shead = new_node;

	if (current != NULL)
		current->sprev = new_node;
	else
		ht->stail = new_node;

	/* Insert the new node into the hash table array */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1); /* Success, added new key */
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if the key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Get the index where the key should be stored */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index to find the key */
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value); /* Found the key, return its value */
		current = current->next;
	}

	return (NULL); /* Key not found */
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int first = 1; /* Flag to track the first key-value pair */

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int first = 1; /* Flag to track the first key-value pair */

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (!first)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		first = 0;
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *temp;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		temp = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = temp;
	}

	free(ht->array);
	free(ht);
}
