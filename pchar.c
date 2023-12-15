#include "monty.h"

/**
 * f_pchar - Prints the char at the top of the stack, followed by a new line.
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function prints the character at the top of the stack.
 *
 * Return: No return value.
 */
void f_pchar(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;

	current = *stack_head;

	if (!current)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	if (current->n > 127 || current->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", current->n);
}
