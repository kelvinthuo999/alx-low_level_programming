#include "lists.h"

/**
 * print_list - function to print elements of a linked list
 * @h: pointer to the start of the list
 * Return: Number of nodes printed
 */

size_t print_list(const list_t *h)
{
	/* variable declaration and initialization */
	size_t idx = 0;

	/* check if head is NULL */
	if (h == NULL)
	{
		return (0);
	}
	/* while loop to traverse the list */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		idx++;
	}
	return (idx);
}
