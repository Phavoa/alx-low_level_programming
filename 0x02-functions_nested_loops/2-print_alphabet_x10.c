#include "main.h"
/**
 * print_alphabet_x10 times - print a to z 10 times
 * Return nothing: 0
 */

void print_alphabet_x10(void)
{
int a;
char c;
for (a = 0; a < 10; a++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
