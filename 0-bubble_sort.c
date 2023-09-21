#include "sort.h"

/**
 * bubble_sort - bubble sort
 * @array: array of integers
 * @size: number of elements
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, length;
	int temp;

	if (!array || size < 2)
		return;

	length = size;

	while (length > 0)
	{
		for (i = 1; i < length; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}

		length--;
	}
}
