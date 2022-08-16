#include "sort.h"

/**
 * bubble_sort - sorts arrayo of integers in ascending order using bubble sort
 * @array: unsorted array of integers
 * @size: size of the array
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t c;
	int swap;

	if (array == NULL || size == 0 || size == 1)
		return;

	for (c = 0; c  < size - 1; c++)
	{
		for (i = 0; i < size - c - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
