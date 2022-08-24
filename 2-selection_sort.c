#include "sort.h"
/**
 * selection_sort - selector sort
 * @array: array
 * @size: size of array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, idx;
	int min;

	if (!array)
		return;
	for (; i < size - 1; i++)
	{
	min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				idx = j;
				min = array[idx];
			}
		}
		if (idx != i)
		{
			array[idx] = array[i];
			array[i] = min;
			print_array(array, size);
		}
	}
}
