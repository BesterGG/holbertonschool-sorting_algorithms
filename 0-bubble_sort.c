#include "sort.h"
/**
 * bubble_sort - Bubblerino Sorterino
 * @array: array
 * @size: size of array
 * Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int tmp = 0;	

	if (!array)
		return;
	for (; i <= size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if(array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
		}	}
	}
}
