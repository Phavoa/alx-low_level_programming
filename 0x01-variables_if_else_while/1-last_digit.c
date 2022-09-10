#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if the is poditive, zero, or negaetive
 *
 * Desscription:using the main function
 * this grogrm prints "programming is positive , zero or negative"
 * return: 0
 */
int main(void)
{int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (1 >5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
}
else if (l ==0)
{
	printf("Last digit of %d is %d and is 0\n", n, l);
}
else 
{
	printf("Last digit of %d is %D and is less than 6 and not 0\n", n, l);
}
return (0);
}
