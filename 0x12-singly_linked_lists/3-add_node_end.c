#include "lists.h"
/**
 * *add_node_end - function adds new node
 * @head: pointer to pointer of head of linked list
 * @str: const char pointer to string
 *
 * Description: function that adds a new node at the end of
 * a list_t list
 *
 * Return: returns address of new element, or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *ptr;
	list_t *latest;
	list_t *new_node;
	int i;

	ptr = strdup(str);
	latest = *head;
	if (!ptr)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
		;
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(ptr);
		return (NULL);
	}
	new_node->str = ptr;
	new_node->len = i;
	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	while (latest->next)
	{
		latest = latest->next;
	}
	latest->next = new_node;
	return (new_node);
}
