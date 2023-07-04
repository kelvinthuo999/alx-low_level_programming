#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node a certain index
 * @head: Pointer to the start of a linked list
 * @index: Location of the node to be deleted
 * Return: 1(success), -1(fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* variable declaration and initialization */
	listint_t *tmp = (*head);
	listint_t *dnode;
	unsigned int loc = 0;

	/* check if the list is NULL */
	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	dnode = *head;
	for (loc = 0; loc < index - 1 && dnode != NULL; loc++)
	{
		dnode = dnode->next;
	}
	/* check if the index is beyond the list */
	if (dnode == NULL || dnode->next == NULL)
		return (-1);
	tmp = dnode->next;
	dnode->next = tmp->next;
	free(tmp);

	return (1);
}
