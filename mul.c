#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function multiplies the values of the top two elements of the stack
 * and updates the stack accordingly.
 *
 * Return: No return value.
 */
void f_mul(stack_t **stack_head, unsigned int line_number)
{
	stack_t *current;
	int stack_size, result;

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
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	current = *stack_head;

	/* Calculate the product and update the stack */
	result = current->next->n * current->n;
	current->next->n = result;
	*stack_head = current->next;
	free(current);
}
