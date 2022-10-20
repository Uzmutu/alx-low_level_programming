#include "lists.h"
/**
 * print_list - function that prints
 * @h: const list_t pointing to head of list
 *
 * Description: function that prints all the elements of a list_t list
 *
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
