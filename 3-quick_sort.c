#include "sort.h"
/**
 * swap - function that swaps integers
 * @a: first integer
 * @b: second integer
 */

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * quick_sort - Function for quick sort algorithm
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}

/**
 * quicksort - Function that do the recursion
 * @array: array to sort
 * @low: low position
 * @high: high position
 * @size: size of the array
 */

void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * partition - Function that splits the pivot positions
 * @array: array
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 * Return: the lowest value
 */

int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int i, j = start;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (j != i)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != end)
	{
		swap(&array[j], &array[end]);
		print_array(array, size);
	}
	return (j);
}
