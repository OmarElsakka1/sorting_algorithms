#include "sort.h"
/**
 * bubble_sort - sort arr asc
 * @array: arr of int
 * @size: size of arr
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
  size_t i, j;
  int tmp;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size - i; j++)
	{
	  if (j + 1 > (size - i) - 1)
	    break;

	  if (array[j] > array[j + 1])
	    {
	      tmp = array[j];
	      array[j] = array[j + 1];
	      array[j + 1] = tmp;
	      print_array(array, size);
	    }
	}
    }
}
