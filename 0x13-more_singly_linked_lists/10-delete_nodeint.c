#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;
	listint_t *next;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current_node = *head;
	i = 0;
	while (i < (index - 1))
	{
		if (!(current_node->next))
			return (-1);
		current_node = current_node->next;
		i++;
	}
	next = current_node->next;
	current_node->next = next->next;
	free(next);
	return (1);
}
