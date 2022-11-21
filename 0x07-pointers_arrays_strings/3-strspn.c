#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a preix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return:  the number of bytes in the initial segment of
 * s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;
	unsigned int m = 0;

	for (i = 0; s[i] != ','; i++)
	{}
	for (j = 0; accept[j] != '\0'; j++)
	{}
	for (k = 0; k < i; k++)
	{
	for (l = 0; l < j; l++)
	{
	if (accept[l] == s[k])
	{
	m++;
	break;
	}
	else if (accept[j + 1] == '\0')
	{
	return (m);
	}
	}
	}
	return (m);
}
