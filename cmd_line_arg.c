#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - one that accepts arguments(input)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	printf("argc: %d\n", argc);

	for (i = 0; argv[i] != NULL; i++)
		printf("argv[%d]: %s\n", i, argv[i]);

	return (0);
}
