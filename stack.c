#include "monty.h"

/**
 * f_stack - Sets the stack mode (LIFO).
 * @head: Stack head
 * @counter: Line number (unused)
 *
 * Description:
 * This function sets the stack mode to Last-In, First-Out (LIFO).
 *
 * Return: No return value.
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
