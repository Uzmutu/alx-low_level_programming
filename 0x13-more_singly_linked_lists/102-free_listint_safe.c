#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int i;
	size_t freed;

	if (!h || !*h)
		return (0);
	freed = 0;
	while (*h)
	{
		i = *h - ((*h)->next);
		if (i <= 0)
		{
			free(*h);
			*h = NULL;
			freed++;
			break;
		}
		else
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			freed++;
		}
	}
	*h = NULL;
	return (freed);
}
