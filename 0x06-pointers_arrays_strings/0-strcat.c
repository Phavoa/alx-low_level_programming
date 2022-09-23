#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy  from
 * Return: two concate strings
 */
char *_strcat(char *dest, char *src)

{
	char dest[] = "Hello ";
	char src[] = "World";
strcat(dest, src);

	printf("%s\n", dest);

return (dest);
}
