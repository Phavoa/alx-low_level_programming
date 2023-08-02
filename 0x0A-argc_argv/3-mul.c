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
	int multiply;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	multiply = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multiply);
	return (0);
}
