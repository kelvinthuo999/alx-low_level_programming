#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to a list to be freed
 * Return: Nothing
 */

void free_list(list_t *head)
{
	/* variable declaration */
	list_t *tmp;
	list_t *current = head;

	/* while loop to traverse the list */
	tmp = head;
	while (tmp != NULL)
	{
		tmp = current->next;
		free(current->next);
		free(current);
		current = tmp;
	}
}
