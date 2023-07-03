#include "lists.h"

/**
 * listint_len - Evaluates the number of elements in a linked list
 * @h: pointer to the start of the list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	/* variable declaration and initialization */
	size_t count_nodes = 0;
	const listint_t *tmp = NULL;

	/* check if the list is empty */
	tmp = h;
	if (tmp == NULL)
		return (0);
	/* while loop to traverse the list */
	while (tmp != NULL)
	{
		count_nodes++;
		tmp = tmp->next;
	}
	return (count_nodes);
}
