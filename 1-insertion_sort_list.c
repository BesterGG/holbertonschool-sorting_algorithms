#include "sort.h"
/**
 * insertion_sort_list - main function
  * @list: double pointer to the first node
  * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = NULL, *cur = NULL, *bef = NULL;

	if (!list || !(*list))
		return;
	aux = (*list)->next;
	while (aux)
	{
		cur = aux;
		bef = aux->prev;
		while (bef && bef->n > cur->n)
		{
			cur->prev = bef->prev;
			bef->next = cur->next;
			cur->next = bef;
			bef->prev = cur;
			if (bef->next)
				bef->next->prev = bef;
			if (cur->prev)
				cur->prev->next = cur;
			else
				*list = cur;
			print_list(*list);
			bef = cur->prev;
		}
		aux = aux->next;
		}
}
