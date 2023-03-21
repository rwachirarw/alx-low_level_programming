#include <stdio.h>
#include "main.h"
/**
 *** print_last_digit - computes the value of a interger
 *** @n: bhabdh
 *** Return: uhuh
 **/
int print_last_digit(int n)
{
	int lastdig = n % 10;

	_putchar(lastdig + '48');
	return (lastdig);
}
