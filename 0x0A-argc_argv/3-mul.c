#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Error, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
