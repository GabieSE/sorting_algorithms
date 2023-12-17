#include "sort.h"

/**
 * swap_ints - a function that swaps two ints
 * @a: a pointer to an int to be swapped
 * @b: a pointer to an int to be swapped
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * shell_sort - a function that sorts an array of integers
 * @size: the size of an array
 * @array: contains ints to be sorted
 */
void shell_sort(int *array, size_t size)
{
	size_t intrvl, i, j;

	if (array == NULL || (size < 2))
		return;

	for (intrvl = 1; intrvl < (size / 3);)
		intrvl = intrvl * 3 + 1;

	for (; intrvl >= 1; intrvl/= 3)
	{
		for (i = intrvl; i < size; i++)
			{
			j = i;
			while (j >= intrvl && array[j - intrvl] > array[j])
			{
				swap_ints(array + j, array + (j - intrvl));
				j -= intrvl;
			}
		}
		print_array(array, size);
	}
}

