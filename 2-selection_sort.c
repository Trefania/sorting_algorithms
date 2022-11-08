#include "sort.h"

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

/**
 * selection_sort - function that sort selction
 * @array: array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, a, *min_num;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_num = array + i;

		for (a = i + 1; a < size; a++)
			min_num = (array[a] < *min_num) ? (array + a) : min_num;

		if (min_num != i)
		{
			swap(array + i, min_num);
			print_array(array, size);
		}
	}
}
