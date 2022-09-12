#include <stdio.h>
/**
 * main - entry point
 *
 * reverse alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int digits;
char alpha;
for (digits = '0'; digits <= '9'; digits++)
{
putchar (digits);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar (alpha);
}
putchar('\n');
return (0);
}
