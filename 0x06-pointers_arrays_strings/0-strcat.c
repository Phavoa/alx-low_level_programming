#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy  from
 * Return: two concate strings
 */
char *_strcat(char *dest, char *src)

{
	char a[8] = "Hello ";
	char b[6] = "World";
	*dest = a[8];
	*src = b[6];
strcat(a, b);

	printf("%s\n", a);

return (dest);
}
