#include "main.h"
/**
 * print_alphabet_x10 times - repeats the print_alphabet 10 times.
 * Return Nothing.
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
