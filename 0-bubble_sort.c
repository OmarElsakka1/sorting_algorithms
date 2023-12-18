#include "sort.h"
/**
 * bubble_sort - sort arr asc
 * @array: arr of int
 * @size: size of arr
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
  size_t j, k;
  int temp;

  for (j = 0; j < size; j++)
    {
      for (k = 0; k < size - j; k++)
	{
	  if (k + 1 > (size - j) - 1)
	    break;

	  if (array[k] > array[k + 1])
	    {
	      temp = array[k];
	      array[k] = array[k + 1];
	      array[k + 1] = temp;
	      print_array(array, size);
	    }
	}
    }
}
