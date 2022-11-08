#include "sort.h"

/**
 * selection_sort - function that sort selction
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, a, min_num;

	for (i = 0; i < size - 1; i++)
	{
		min_num = i;

		for (a = i + 1; a < size; a++)
			if (array[a] < array[min_num])
				min_num = a;
		if (min_num != i)
		{
			swap(&array[min_num], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Function that swaps two values
 *
 * @f: Fisrt value
 * @s: Second value
 * Return: 0
 */
void swap(int *f, int *s)
{
	int tmp;

	tmp = *s;
	*s = *f;
	*f = tmp;
}
