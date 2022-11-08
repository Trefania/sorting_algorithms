#include "sort.h"
/**
 * selection_sort - function that sort selction
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, a;

	for (i = 0; i < size - 1; i++)
	{
		int min = i;

		for (a = i + 1; a < size; a++)
		{
			if (array[a] < array[min])
				min = a;
		}
		if (min ! = i)
		{
			swap (&array[i]; &array[min]);
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

	tmp = *f;
	*s = *f;
	*f = tmp;
}
