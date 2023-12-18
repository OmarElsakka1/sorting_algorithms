#include "sort.h"

/**
 * swap - swaps 2 linked nodes
 * @a: node 1
 * @b: node 2
 */
void swap(listint_t *a, listint_t *b)
{
  if (a->prev)
    a->prev->next = b;
  if (b->next)
    b->next->prev = a;

  a->next = b->next;
  b->prev = a->prev;
  a->prev = b;
  b->next = a;
}

/**
 * insertion_sort_list - sort arr asc
 * @list: arr of int
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
  listint_t *i, *j;

  if (!list || !*list || !(*list)->next)
    return;

  i = (*list)->next;
  while (i)
    {
      j = i;
      i = i->next;
      while (j && j->prev)
	{
	  if (j->prev->n > j->n)
	    {
	      swap(j->prev, j);
	      if (!j->prev)
		*list = j;

	      print_list((const listint_t *) *list);
	    }
	  else
	    j = j->prev;
	}

    }

}
