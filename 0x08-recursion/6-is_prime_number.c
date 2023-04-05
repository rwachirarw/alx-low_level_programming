#include "main.h"

/**
 * is_prime_number - Check for a prime number
 *@n: integer to be checked
 *Return: Integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_checker(n, 2));
}

/**
  * is_prime_checker - iterates numbers to check for prime
  * @n: interger passed in from is_prime number function
  * @i: iterate throught the number
  * Return: Integer
  */

int is_prime_checker(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_checker(n, i + 1));
}
