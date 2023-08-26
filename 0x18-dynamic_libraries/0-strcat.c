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
char *begin = dest;

while (*dest)
dest++;
while (*src)
{
*dest = *src;
src++;
dest++;
}
*dest = '\0';
return (begin);
}
