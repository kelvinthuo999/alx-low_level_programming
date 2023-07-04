#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a certain index
 * @head: Pointer to the starting point of a linked list
 * @idx: Position to insert the new node
 * @n: Data to be held in the new node
 * Return: Address to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* variable declaration and initialization */
	listint_t *new, *tmp;
	unsigned int loc = 0;

	/* check if the list is empty */
	if ((*head) == NULL)
		return (NULL);
	/* create a new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)	/* check if memory has been allocated */
		return (NULL);
	new->n = n;
	new->next = NULL;
	/* check if the idx is 0 to replace the head */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	/* for loop to traverse the list */
	tmp = *head;
	for (loc = 0; loc < (idx - 1) && tmp != NULL; loc++)
	{
		tmp = tmp->next;
	}
	/* check if the idx is beyond the list */
	if (tmp == NULL)
	{
		free(new);
		return (NULL);
	}
	/* insert the new node */
	new->next = tmp->next;	/* keep the link to the rest of the list */
	tmp->next = new;

	return (new);
}
