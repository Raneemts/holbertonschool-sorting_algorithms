#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers in ascending order using the Selection sort algorithm
 * @array: print after each time you swap two elements
 *
 * return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t size;
	int tmp;
	
	for (first = 0; first < size - 1; first++)
	{
		size_t min = first;

		for (second = first + 1; second < size; second++)
		{
			if (array[second] < array[min])
			{
				min = second;
				continue;
			}
		}
		if (min!= first)
		{
			tmp = array[first];
			array[first] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
