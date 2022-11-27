#include <stdio.h>
#include <stdlib.h>
/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int multiply = 1;
	
	if (argc == 1 || argc == 2)
		printf("Error\n");
	else if(argc > 1)
	{
	for (i = 1; i < 3; i++)
	{
	multiply = multiply * atoi(argv[i]);
	}
	printf("%d\n", multiply);
	}
	return (0);
}
