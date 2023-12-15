#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Double pointer to the beginning of the stack.
 * @counter: Line number in the Monty file.
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (head && *head && (*head)->next)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;

		while (temp->next)
			temp = temp->next;

		temp->next = temp->prev;
		temp->prev = NULL;
		temp->next->next = NULL;
		temp->next->prev = temp;
	}

	(void)counter;
}
