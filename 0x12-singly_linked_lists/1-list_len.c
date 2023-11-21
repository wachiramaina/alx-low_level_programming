#include "lists.h"

/**
 * list_len - finds number of elements
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
