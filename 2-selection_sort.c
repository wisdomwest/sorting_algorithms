#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: array of integers
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, num;
	int temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		num = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[num])
			{
				num = j;
			}

		}

		if (num != i)
		{
			temp = array[i];
			array[i] = array[num];
			array[num] = temp;
			print_array(array, size);
		}
	}
}
