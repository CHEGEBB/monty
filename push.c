#include "monty.h"

/**
 * push_value - Pushes an element onto the stack.
 * @value: The value to push onto the stack.
 * @stack: Double pointer to the stack.
 * @line_number: Line number in the Monty byte code file.
 */
void push_value(char *value, stack_t **stack, unsigned int line_number)
{
    int num;

    if (!value || !isdigit(*value) && *value != '-')
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    num = atoi(value);

    stack_t *new_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = num;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack)
        (*stack)->prev = new_node;

    *stack = new_node;
}
