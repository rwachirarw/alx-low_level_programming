#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a
  * parameter on each element of an array.
  * @array: array
  * @size: size fo array
  * @action: function
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
