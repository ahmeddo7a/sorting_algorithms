#include "sort.h"

/**
 * selection_sort - sort array on integers
 * Description: the implementation of selection sort
 * @array: array of integers
 * @size: size of the array
 * Return: None
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}

}
