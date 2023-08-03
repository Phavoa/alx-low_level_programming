#include <stdlib.h>
#include <stdio.h>

/**
 * main - Adds positive numbers
 *
 * @argc: Argument count
 *
 * @argv: Argument vector
 *
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	int i, j, number, add = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j]) < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		number = atoi(argv[i]);
		if (number < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			add += number;
		}
	}
	printf("%d\n", add);
	return (0);
}
