#include "monty.h"

/**
 * print_top - prints the top element of the stack
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the script
 * Return: no return
*/
void print_top(stack_t **stack_head, unsigned int line_number)
{
	if (*stack_head == NULL)
	{
		fprintf(stderr, "L%u: cannot print, stack is empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack_head)->n);
}
