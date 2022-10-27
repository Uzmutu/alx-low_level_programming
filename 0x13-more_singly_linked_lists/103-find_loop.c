#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ous;
	listint_t *mane;

	ous = head;
	mane = ous;
	while (ous && mane && mane->next)
	{
		ous = ous->next;
		mane = mane->next->next;
		if (ous == mane)
		{
			ous = head;
			while (ous != mane)
			{
				ous = ous->next;
				mane = mane->next;
			}
			return (mane);
		}
	}
	if (!ous || !mane || !mane->next)
		return (NULL);
	return (NULL);
}
