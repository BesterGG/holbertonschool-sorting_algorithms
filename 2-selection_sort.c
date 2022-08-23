#include "sort.h"
/**
 * selection_sort - selector sort
 * @array: array
 * @size: size of array
 * Return: Void
*/
void selection_sort(int *array, size_t size)
{
	size_t i,j;
	int min;
	if (!array)
		return;

	min = array[0];
	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
			}
		}
	array[i] = min;
	min = array[i];
	}
/*
	if (jmin != i)
	{	
		tmp = array[j];
		array[i] = array[i + 1];

		print_array(array, size);
	}
*/
}
