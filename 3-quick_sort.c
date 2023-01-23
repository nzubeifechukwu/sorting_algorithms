#include <stdio.h>
#include "sort.h"

/**
 * lomuto - The Lomuto partition scheme
 * @array: An array of integers
 * @lo: index 0 of @array
 * @hi: last index of @array
 * @size: size of @array
 *
 * Return: The pivot index
 */
int lomuto(int *array, int lo, int hi, size_t size)
{
	int j;
	int x, y;
	int pivot = array[hi];
	int i = lo - 1;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i = i + 1;
			x = array[i];
			y = array[j];
			array[i] = y;
			array[j] = x;
			/* print_array(array, size); */
		}
	}
	i = i + 1;
	x = array[i];
	y = array[hi];
	array[i] = y;
	array[hi] = x;
	print_array(array, size);

	return (i);
}

/**
 * quicksort - Sorts an array of integers using the quick sort algorithm
 * @array: The array of integers
 * @lo: First index of @array
 * @hi: Last index of @array
 * @size: size of @array
 */
void quicksort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo >= hi || lo < 0)
		return;
	p = lomuto(array, lo, hi, size);
	quicksort(array, lo, p - 1, size);
	quicksort(array, p + 1, hi, size);
}

/**
 * quick_sort - Implements the quick sort algorithm using the specified args
 * @array: An array of integers
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0;
	int hi = (int)size - 1;

	quicksort(array, lo, hi, size);
}
