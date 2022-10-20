#include "lists.h"
/**
 * *free_list - function frees a list_t list
 * @head: pointer to pointer of head of linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *i;
	list_t *tmp;

	i = head;
	while (i)
	{
		tmp = i;
		i = i->next;
		free(tmp->str);
		free(tmp);
		head = NULL;
	}
}
