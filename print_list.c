#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
  int j;

  j = 0;
  while (list)
    {
      if (j > 0)
	printf(", ");
      printf("%d", list->n);
      ++j;
      list = list->next;
    }
  printf("\n");
}
