#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @stack_head: Stack head
 * @line_number: Line number (unused)
 *
 * Description:
 * This function rotates the stack to the top, moving the top element to
 * the bottom.
 *
 * Return: No return value.
 */
void f_rotl(stack_t **stack_head, __attribute__((unused)) unsigned int line_number)
{
    stack_t *current = *stack_head, *new_head;

    if (*stack_head == NULL || (*stack_head)->next == NULL)
    {
        return;
    }

    new_head = (*stack_head)->next;
    new_head->prev = NULL;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = *stack_head;
    (*stack_head)->next = NULL;
    (*stack_head)->prev = current;
    (*stack_head) = new_head;
}
