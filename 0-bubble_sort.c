#include "sort.h"

/**
 * bubble_sort - sort array of integers
 * Description: implementation of bubble sort agorithm
 * @array: array of integers
 * @size: size of the array
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap = 0;

	for (i = 0; i < size; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = 1;
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		if (!swap)
			break;
	}
}
