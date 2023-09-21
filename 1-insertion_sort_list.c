#include "sort.h"

/**
 * insertion_sort_list - insertion sort
 * @list: doubly linked list of integers
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		prev = current->prev;

		while (prev && temp->n < prev->n)
		{
			if (temp->next)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;
			prev->prev = temp;
			if (temp->prev)
				temp->prev->next = temp;
			else
				*list = temp;
			prev = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
