#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * Main - Entry point
 * Return; always 0 (Success)
 */
int main(void)
{
		int n;
int L;
char str[] = "Last digit of";

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (L > 5)
				{	printf("%s %d is %d and is greater than 5\n" str, L, n);
				}
				else if (L == 0)
				{
				printf("%s %d is %d and is 0\n"str, L, n);	
				}
				else if (L < 6)
				{ printf( "%s %d is %d amd is less than 6 and not 0\n"str, L, n);
				}
					return (0);
}
