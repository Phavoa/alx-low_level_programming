#include "main.h"

/**
 * _atoi - Entry point
 * @s: input
 * Return: Always the interger value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}

	}
return (sign * result);
}

