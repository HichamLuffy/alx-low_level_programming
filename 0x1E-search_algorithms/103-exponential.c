#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (mid = L; mid < R; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (L + R) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			L = mid + 1;
		else
			R = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array using
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where the value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			bound / 2, (bound < size) ? bound : size - 1);
	return (binary_search(array + bound / 2,
				(bound < size) ? size - bound / 2 : bound / 2,
				value));
}
