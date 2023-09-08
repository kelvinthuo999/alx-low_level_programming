#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: pointer to the newly created hash table, or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_htable;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	/* Allocate memory for the hash table structure */
	new_htable = malloc(sizeof(hash_table_t));
	if (new_htable == NULL)
		return (NULL);

	/* Allocate memory for the array of hash_node_t pointers */
	new_htable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_htable->array == NULL)
	{
		free(new_htable); /* Clean up on failure */
		return (NULL);
	}

	new_htable->size = size;

	/* Initialize each element of the array to NULL */
	for (i = 0; i < size; i++)
		new_htable->array[i] = NULL;
	return (new_htable);
}
