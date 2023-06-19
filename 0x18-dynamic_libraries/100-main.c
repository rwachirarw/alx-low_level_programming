#include "main.h"
/**
 * main - start of the program
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	int a = 11223;
	int b = 1243;

	printf("%d + %d = %d\n", a, b, sum(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));
	printf("%d / %d = %d\n", a, b, division(a, b));
	printf("%d %% %d = %d\n", a, b, mod(a, b));
	return (0);
}
