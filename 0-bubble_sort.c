#include "sort.h"

/**
 * bubble_sort - Sorts an array in ascending order.
 * @array: Array of integers
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, status = 0;

	while (!status)
	{
		status = 1;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				status = 0;
				print_array(array, size);
			}
		}
	}
}
