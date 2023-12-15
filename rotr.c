#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (head && *head && (*head)->next)
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		temp->prev->next = NULL;
		temp->prev = NULL;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}

	(void)counter;
}
