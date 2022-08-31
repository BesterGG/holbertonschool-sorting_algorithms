#include "sort.h"
/**
 *swap- swap the values of in the nodes.
 *@a: a value
 *@b: b value
 *Return: Nothing
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 *partition- partition lomuto implementation
 *@array: array to be sorted
 *@low: the first value on the array
 *@high: the last element on the array
 *@realsize: size of the array
 *Return: value of
 */
int partition(int array[], int low, int high, int realsize)
{
	int pivot = array[high];
	int i = (low - 1), j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, realsize);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, realsize);
	return (i + 1);
}
/**
 *realquickSort -sort array
 *@array: the array to be sorted
 *@low: the first element on the array
 *@high: the last element on the array
 *@size: lenght of the array
 *Return: Nothing
 */
void realquickSort(int array[], int low, int high, int size)
{
	int pi, realsize = size;

	if (low < high)
	{
		pi = partition(array, low, high, realsize);
	if (pi - low < high - pi)
	{
		realquickSort(array, low, pi - 1, realsize);
		low = pi + 1;
	}
	else
	{
		realquickSort(array, pi + 1, high, realsize);
		high = pi - 1;
	}
	}
}
/**
 *quick_sort -sorting an array
 *@array: the array
 *@size: lenght of the array
 *Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	realquickSort(array, 0, size - 1, size);
}
