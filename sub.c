#include "monty.h"

/**
 * pop_top - removes the top element from the stack
 * @stack_head: pointer to the head of the stack
 * @line_number: line number in the script
 * Return: no return
 */
sub pop_top(stack_t **stack_head, unsigned int line_number)
{
    stack_t *temp;

    if (*stack_head == NULL)
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack_head);
        exit(EXIT_FAILURE);
    }

    temp = *stack_head;
    *stack_head = temp->next;
    if (*stack_head)
    {
        (*stack_head)->prev = NULL;
    }
    free(temp);
}
