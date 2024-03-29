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
	int i, j, num = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			break;
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				num += 1;
			}
		}
	}
	return (num);
}
