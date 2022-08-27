#include "sort.h"
/**
 * quick_sort - holberton mandatory prototype
 * @array: array
 * @size: size of array
 * @Return: Void
 */
void quick_sort(int *array, size_t size)
{
	real_quick_sort(array, start, end);
}
/**
 * real_quick_sort - main
 * @array: array
 * @size: size
 * Return: Void
 */
void real_quick_sort(int *array, size_t size,int star, int end)
{
	int end = 0, start = 0;
	int pi = 0;
	
	while(array[end])
		end++;

	if (start < end)
	{
	pi = partition_lomutosky(array, size, start, end);
	/**real_quick_sort(array, size, start, end)*/
	real_quick_sort(array, start, pi - 1);
	real_quick_sort(array, pi + 1, end);
	}
}
/**
 * partition_lomutosky - main
 * @array: array
 * start: start of array
 * end: end of array
 * Return: index
 */
int partition_lomutosky(int **array, size_t size, int start, int end)
{
	int pivot = *array[end];
	int i = (low - 1), int j;
	for (j = start; j <= end - 1; j++)
	{
		if (array[j] <= pivot)
		{
		i++;
		swap(array[i], array[end]);
		}
	}
	swap(array[i + 1], array[end]);
	return (i + 1);
}
