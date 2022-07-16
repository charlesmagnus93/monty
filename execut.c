#include "monty.h"

/**
 * execut - process
 * @file: file name
 * @stack: stack data struct
 * Return: error or success
 *
 **/

int execut(char *file, stack_t **stack)
{
	FILE *fileopen;
	if (!file)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	fileopen = fopen(file, 'r');

	if (fileopen == NULL)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
}
