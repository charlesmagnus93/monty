#include "monty.h"

/**
 * main - Entry
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: number
 */
int main(int argc, char **argv)
{
	stack_t *head;

	*head = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	execut(argv[1], &head);
	exit(EXIT_SUCCESS);
}
