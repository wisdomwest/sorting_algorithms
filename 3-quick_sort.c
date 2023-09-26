#include "sort.h"

/**
 * swap - swap function
 * @i: index of first
 * @j: index of second
*/
void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
 * partition- Lomuto partition i dont understand
 * @array: array
 * @lo: index begins partition
 * @hi: index ends partition
 * @size: size
 * Return: new index of partition
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot = array[hi];
	int i = lo - 1;
	int j;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[hi]);
	if (i + 1 != hi)
		print_array(array, size);

	return (i + 1);
}

/**
 * sort - Lomuto quicksort
 * @array: array d
 * @lo: index that begins partition
 * @hi: index ends partition
 * @size: size
 */
void sort(int *array, int lo, int hi, size_t size)
{
	int i;

	if (lo < hi)
	{
		i = partition(array, lo, hi, size);
		sort(array, lo, i - 1, size);
		sort(array, i + 1, hi, size);
	}
}

/**
 * quick_sort - quicksort
 * @array: array
 * @size: sort
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort(array, 0, (int)size - 1, size);
}
