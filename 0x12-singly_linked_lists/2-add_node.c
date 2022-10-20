#include "lists.h"
/**
 * *add_node - function that adds node
 * @head: pointer to pointer of head of linked list
 * @str: const char pointer to string
 *
 * Description: function that adds a new node at the beginning of
 * a list_t list.
 *
 * Return: address of new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *ptr;
	list_t *new_head;
	int i;

	ptr = strdup(str);
	new_head = NULL;
	if (!ptr)
		return (NULL);
	for (i = 0; ptr[i] != '\0'; i++)
		;
	new_head = malloc(sizeof(list_t));
	if (!new_head)
	{
		free(ptr);
		return (NULL);
	}
	new_head->str = ptr;
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
