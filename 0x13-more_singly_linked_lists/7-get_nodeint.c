#include "lists.h"
/**
 * get_nodeint_at_index - function that get.
 * @head: pointer to the first node in the list
 * @index: index of the node to return
 *
 * Description: function that returns the nth node of a listint_t linked list.
 *
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	i = 0;
	while (i < index)
	{
		head = head->next;
		if (!head)
			return (NULL);
		i++;
	}
	return (head);
}
