#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @stack_head: Stack head
 * @line_number: Line number (unused)
 *
 * Description:
 * This function rotates the stack to the bottom, moving the bottom element to
 * the top.
 *
 * Return: No return value.
 */
void f_rotr(stack_t **stack_head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current;

    current = *stack_head;

    if (*stack_head == NULL || (*stack_head)->next == NULL)
    {
        return;
    }

    while (current->next)
    {
        current = current->next;
    }

    /* Move the bottom element to the top */
    current->next = *stack_head;
    current->prev->next = NULL;
    current->prev = NULL;
    (*stack_head)->prev = current;
    (*stack_head) = current;
}
