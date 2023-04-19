#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter on each element of an array.
  * @array: array
  * @size: size fo array
  * @action: function
  * Return: void
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(array
