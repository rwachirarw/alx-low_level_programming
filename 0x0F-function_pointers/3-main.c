#include "3-calc.h"

/**
 * main - start of the program
 * @argc: argument coint
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, get_results;
	int (*operator)(int, int);



	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);


	if (operator == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	get_results = operator(num1, num2);

	printf("%d\n", get_results);

	return (0);
}
