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
