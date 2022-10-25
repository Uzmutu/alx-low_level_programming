#include "lists.h"
/**
 * listint_len - entry point
 * @h: pointer to the linked list
 *
 * Description: function that returns the number of elements in a
 * linked listint_t list.
 *
 * Return: returns number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
