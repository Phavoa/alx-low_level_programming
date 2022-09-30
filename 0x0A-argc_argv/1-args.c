#include <stdio.h>

/**
 * main - Print the number of an argument
 * @argc: number of command line arguments
 * @argv: prints name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if(argc >= 1)
	printf("%d\n", argc - 1);
	return (0);
}
