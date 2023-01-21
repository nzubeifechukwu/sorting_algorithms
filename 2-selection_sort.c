#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts arr of ints in ascending order using selection sort
 *
 * @array: The array of integers
 * @size: Size of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int x, y;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != 1)
		{
			x = array[i];
			y = array[min_idx];
			array[i] = y;
			array[min_idx] = x;
			print_array(array, size);
		}
	}
}
