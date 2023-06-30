#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the start of the list
 * Return: Number of elements in a list.
 */

size_t list_len(const list_t *h)
{
	/* variable declaration and initialization */
	size_t idx = 0;
	const list_t *ptr; /* temporary pointer to traverse the list */

	/* while loop to traverse the list */
	ptr = h;
	while (ptr != NULL)
	{
		idx++;
		ptr = ptr->next;
	}
	return (idx++);
}
