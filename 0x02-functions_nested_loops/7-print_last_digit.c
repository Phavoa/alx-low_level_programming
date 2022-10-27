#include "main.h"

/**
 *  print_last_digit - last digit
 *
 *@n: The int to print
 * Return: Always 0.
 */

int print_last_digit(int a)
	{
	a = a % 10;
	if (a < 0)
	{
	a = -1 * a;
	}
	_putchar('0' + a);
	return (a);

}
