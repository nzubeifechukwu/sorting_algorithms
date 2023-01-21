#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts integer array in ascending order using bubble sort algo
 *
 * @array: The integer array
 * @size: Size of @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, new_len;
	size_t len = size;
	int x, y;

	while (len > 1)
	{
		new_len = 0;
		for (i = 1; i < len; i++)
		{
			if (array[i - 1] > array[i])
			{
				x = array[i];
				y = array[i - 1];
				array[i - 1] = x;
				array[i] = y;
				new_len = i;
				print_array(array, size);
			}
		}
		len = new_len;
	}
}
