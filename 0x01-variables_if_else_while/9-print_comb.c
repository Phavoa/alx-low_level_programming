/**
 * main - entry point
 *
 * Description: Print all possible combinations of single-digit numbers
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}

