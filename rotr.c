#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the script
 * Return: no return
*/
void rotr(stack_t **stack_head, unsigned int line_number)
{
	stack_t *temp, *last;

	(void)line_number; // Unused parameter, silence the compiler warning

	if (*stack_head != NULL && (*stack_head)->next != NULL)
	{
		temp = *stack_head;
		last = temp;

		// Traverse the stack to find the last element
		while (temp->next != NULL)
		{
			last = temp;
			temp = temp->next;
		}

		// Adjust pointers to rotate the stack
		last->next = NULL;
		temp->next = *stack_head;
		*stack_head = temp;
	}
}
