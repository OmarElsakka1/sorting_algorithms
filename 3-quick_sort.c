#include "sort.h"

/**
 * swap - Swaps two values of two integers.
 *
 * @x: Pointer to the first integer.
 * @y: Pointer to the second integer.
 */
void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}

/**
 * partition - div array 2
 *
 * @array: arr
 * @low: start index
 * @high: end index
 * @size: size of the array.
 * Return: The index of the pivot element after partitioning.
 */
int partition(int *array, int low, int high, size_t size)
{
  int pivot = array[high];
  int i = low - 1;
  int j;

  for (j = low; j <= high - 1; j++)
    {
      if (array[j] <= pivot)
	{
	  i += 1;
	  if (i != j)
	    {
	      swap(&array[i], &array[j]);
	      print_array(array, size);
	    }
	}
    }

  if (i + 1 != high)
    {
      swap(&array[i + 1], &array[high]);
      print_array(array, size);
    }

  return (i + 1);
}

/**
 * quick_sort_recursive - recursion func
 *
 * @array: ptr to the array
 * @low: start index
 * @high: end index
 * @size: size
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
  int pivot;

  if (low < high)
    {
      pivot = partition(array, low, high, size);
      quick_sort_recursive(array, low, pivot - 1, size);
      quick_sort_recursive(array, pivot + 1, high, size);
    }
}

/**
 * quick_sort - Wrapper function to call the Quick Sort Algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;

  quick_sort_recursive(array, 0, size - 1, size);
}
