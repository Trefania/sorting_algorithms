#include "sort.h"

/**
 *bubble_sort - Sorts an array of integers in ascending order
 *@array: An array of integers to be sorted.
 *@size: Size of the array.
 *Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - 1); b++)
		{
			if (array[b] > array[b + 1])
			{
				int temp = array[b];

				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
