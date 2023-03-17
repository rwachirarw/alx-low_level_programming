#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - Entry point
 **
 ** Return: The last digit
 **/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastdig = n % 10;

if(lastdig > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
else if (lastdig == 0)
printf("Last digit of %d is %d and is 0", n, lastdig);
else
printf("Last digit of %d is %d and is less than 6 and not 0", n, lastdig);
return (0);
}
