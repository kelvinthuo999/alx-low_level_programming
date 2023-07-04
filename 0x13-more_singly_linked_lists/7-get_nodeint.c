#include "lists.h"

/**
 * get_nodeint_at_index - Traverses the list and fetch a particular node
 * @head: Pointer to the starting point of a linked list
 * @index: Position of the node to be fetched
 * Return: Address to the particular node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* variable declaration and initialization */
	listint_t *tmp = head;
	unsigned int loc = 0;

	/* check if the list is empty */
	if (head == NULL)
		return (NULL);
	while (loc < index)
	{
		tmp = tmp->next;
		loc++;
	}
	return (tmp);
}
