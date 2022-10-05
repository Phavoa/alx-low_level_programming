#include "main.h"
#include <stdio.h>
#include <stdlib.hi>
/**
 * create_array - creat an array of char
 * @size: name of int variable
 * @c: name of char variable
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
	return (NULL);

	s = malloc(size * sizeof(char));
s = c;
	if (s == NULL)
	return (NULL);
	else
	for (i = 0; i < size; i++)
	{
	s[i];
	}
	return (s)i
