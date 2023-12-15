#include "monty.h"

/**
 * f_mod - Computes the remainder of the division of the second
 *         top element of the stack by the top element of the stack.
 * @stack_head: Pointer to the head of the stack.
 * @line_number: Line number in the Monty file.
 *
 * Description:
 * This function calculates the remainder of the division of the second
 * top element of the stack by the top element of the stack. It updates
 * the stack accordingly.
 *
 * Return: No return value.
 */
void f_mod(stack_t **stack_head, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	current = *stack_head;

	/* Check for division by zero */
	if (current->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack_head);
		exit(EXIT_FAILURE);
	}

	/* Calculate the remainder and update the stack */
	result = current->next->n % current->n;
	current->next->n = result;
	*stack_head = current->next;
	free(current);
}
