#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head: double pointer to the beginning of a listint_t list
 * @n: integer to add to the list
 *
 * Description: function that adds a new node at the beginning
 * of a listint_t list
 *
 * Return: returns address of new node if success and NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
