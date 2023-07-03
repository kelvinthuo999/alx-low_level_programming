#include "lists.h"

/**
 * print_listint - Prints all the elements of a list
 * @h: pointer to the start of the list
 * Return: Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
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
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (count_nodes);
}
