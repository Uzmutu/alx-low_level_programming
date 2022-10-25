#include "lists.h"
/**
 * add_nodeint_end - adds a new node
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Description: function that adds a new node at the end of a listint_t list.
 *
 * Return: returns point to the new node if success and NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next)
		current_node = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
