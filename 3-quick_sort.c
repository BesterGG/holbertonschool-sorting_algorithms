#include "sort.h"
/**
 * quick_sort - main
 * @array: array
 * @size: size
 * Return: Void
 */
 void quick_sort(int *array, size_t size)
{
	int end = 0, start = 0, i = 0;
	int partition;
	
	while(array[i])
		end++;
		i++;

	if (start < end)
	{
	}
}

/**
 * partition_lomutosky - main
 * @array: array
 * start: start of array
 * end: end of array
 * Return: index
 */
int partition_lomutosky(int **array, int start, int end)
{
	int a = *array;
	int pivot = *array[end]; /* Hay que sacar high*/
	int i = (low - 1), int j; /* Index del elemento mas pequeño*/
	for (j = start; j <= end - 1; j++)
	{
		if (a[j] <= pivot)
		{
		i++;
		/**swapeamos*/
		}
	}
	/**swapeamos de nuevo*/
	return (i + 1);
}
