#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array
  * @size: size of the array
  * @cmp: pointer to the function to be used to compare values
  * Return: index of the first element
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
