#include <stdio.h>

/**
 * main - prints 1-100.
 * multiples of three print Fizz
 * multiples of five print Buzz
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
			{
				printf(" FizzBuzz");
			}
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf(" FizzBuzz");
			}
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}

	}
	putchar('\n');
	return (0);
}


