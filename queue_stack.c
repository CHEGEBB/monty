#include "monty.h"

/**
 * f_stack - Sets the format of the data to a stack (LIFO).
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_stack(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	(void)counter;
	(void)head;
	/* Do nothing, already in stack mode */
}

/**
 * f_queue - Sets the format of the data to a queue (FIFO).
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_queue(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head;

	if (temp && temp->next)
	{
		while (temp->next)
			temp = temp->next;

		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
}
