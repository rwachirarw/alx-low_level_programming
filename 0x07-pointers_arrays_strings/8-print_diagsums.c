#include "main.h"

/**
  * print_diagsums-sum of the two diagonals of a square matrix of integers.
  * @a: pointer
  * @size: size
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int i, sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		sumd1 = sumd1 + *(a + i * size + i);
		sumd2 = sumd2 + *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sumd1, sumd2);
}
