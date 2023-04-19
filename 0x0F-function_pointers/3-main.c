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



	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(argv[2] == "+" || argv[2] == "-" || argv[2] == "*" || argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error\n");
		exit(99);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	get_results = get_op_func(operator)(num1, num2);
}
