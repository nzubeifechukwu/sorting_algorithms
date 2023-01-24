#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts doubly linked list of ints using insertion sort
 * @list: Points to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *curr, *p;

	if (*list == NULL || (*list)->next == NULL)
		return;
	head = NULL;
	while (*list != NULL)
	{
		curr = *list;
		*list = (*list)->next;
		if (head == NULL || curr->n < head->n)
		{
			curr->next = head;
			head = curr;
			print_list(head);
		}
		else
		{
			p = head;
			while (p != NULL)
			{
				if (p->next == NULL || curr->n < (p->next)->n)
				{
					curr->next = p->next;
					p->next = curr;
					print_list(head);
					break;
				}
				p = p->next;
				/* print_list(head); */
			}
		}
		/* print_list(head); */
	}
}
