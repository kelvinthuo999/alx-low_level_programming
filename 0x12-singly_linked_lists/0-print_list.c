#include "lists.h"

/**
 * print_list - Prints all elements in a list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current;

	if (h == NULL)
		return (0);

	current = h;

	while (current)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", current->len, current->str);

		current = current->next;
		node_count++;
	}

	return (node_count);
}
