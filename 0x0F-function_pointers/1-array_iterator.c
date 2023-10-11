#include "function_pointers.h"

/**
 * array_iterator - a function that executes a given function
 *			as a parameter on each element of an array
 *
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function to call
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
		int *end = array + size - 1 ;

		if (array && action && size)
			while (array <= end)
				action(*arrray++);
}
