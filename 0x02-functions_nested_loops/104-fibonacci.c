#include <stdio.h>

/* A function to print a large number stored in an array */
void print_number(int arr[], int size)
{
	/* Loop through the array from the most significant digit to the least */
	for (int i = 0; i < size; i++)
	{
		/* Print the digit using putchar function */
		putchar(arr[i] + '0');
	}
}

/* A function to add two large numbers stored in arrays and store the result in another array */
void add_numbers(int a[], int b[], int c[], int size)
{
	/* Initialize a carry variable to zero */
	int carry = 0;

	/* Loop through the arrays from the least significant digit to the most */
	for (int i = size - 1; i >= 0; i--)
	{
		/* Add the digits and the carry and store the result in c[i] */
		c[i] = a[i] + b[i] + carry;

		/* Update the carry if needed */
		if (c[i] > 9)
		{
			c[i] -= 10;
			carry = 1;
		}
		else
		{
			carry = 0;
		}
	}
}

/* A function to copy an array to another array */
void copy_array(int src[], int dest[], int size)
{
	/* Loop through the arrays and copy each element */
	for (int i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
}

/* A function to find and print the first n Fibonacci numbers */
void print_fibonacci(int n)
{
	/* Check if n is valid */
	if (n < 1 || n > 98)
	{
		printf("Invalid input\n");
		return;
	}

	//Define an array size that can hold up to 98th Fibonacci number (approximately) 
	const int SIZE=21;

	//Initialize three arrays to store two consecutive Fibonacci numbers and their sum 
	int a[SIZE],b[SIZE],c[SIZE];

	//Initialize all elements of the arrays to zero 
	for(int i=0;i<SIZE;i++)
	{
		a[i]=b[i]=c[i]=0;
	}

	//Set first two Fibonacci numbers as 1 and 2 respectively 
	a[SIZE-1]=1;
	b[SIZE-1]=2;

	//Print first Fibonacci number 
	print_number(a,SIZE);

	//Print comma and space 
	putchar(',');
	putchar(' ');

	//Loop from second Fibonacci number until n 
	for(int i=2;i<=n;i++)
	{  
		//Print current fibonacci number
		print_number(b, SIZE);

		//Add previous two fibonacci numbers
		add_numbers(a,b,c,SIZE);

		//Copy current fibonacci number into previous one
		copy_array(b,a,SIZE);

		//Copy sum into current fibonacci number
		copy_array(c,b,SIZE);

		//Print comma and space if not last number
		if(i!=n){
			putchar(',');
			putchar(' ');
		}
	}

	//Print new line 
	putchar('\n');
}

//Main function that calls print_fibonacci with input n 
int main(void)
{
	int n;

	printf("Enter a positive integer between 1 and 98: ");
	scanf("%d",&n);

	print_fibonacci(n);

	return(0);
}
```
