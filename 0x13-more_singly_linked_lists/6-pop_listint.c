#include "lists.h"
/**
 * pop_listint - function that deletes
 * @head: double pointer to the beginning of the list
 *
 * Description: function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * Return: the head node's data (n) if succeed or 0 if fails.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = *head;
	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
