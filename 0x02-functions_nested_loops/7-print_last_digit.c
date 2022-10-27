#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
	a = -1 * a;
	}
	_putchar(a);
	return (a);
}
