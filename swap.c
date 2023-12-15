#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function swaps the values of the top two elements of the stack.
 *
 * Return: No return value.
 */
void f_swap(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;
	int stack_size, temp_value;

	current = *stack_head;

	/* Count the number of elements in the stack */
	while (current)
	{
		current = current->next;
		stack_size++;
	}

	/* Check if there are at least two elements in the stack */
	if (stack_size < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	current = *stack_head;

	/* Swap the values of the top two elements */
	temp_value = current->n;
	current->n = current->next->n;
	current->next->n = temp_value;
}
