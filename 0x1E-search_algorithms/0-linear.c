#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t zy;

	if (array == NULL)
	{
		return (-1);
	}

	for (zy = 0; zy < size; zy++)
	{
		printf("Value checked array[%li] = [%i]\n", zy, array[zy]);
		if (array[zy] == value)
		{
			return (zy);
		}
	}
	return (-1);
}
