#include "monty.h"

/**
 * f_push - Adds a node to the stack.
 * @stack_head: Stack head
 * @line_number: Line number
 *
 * Description:
 * This function adds a new node to the stack with the given value.
 *
 * Return: No return value.
 */
void f_push(stack_t **stack_head, unsigned int line_number)
{
    int value, index = 0, error_flag = 0;

    if (bus.arg)
    {
        if (bus.arg[0] == '-')
            index++;
        for (; bus.arg[index] != '\0'; index++)
        {
            if (bus.arg[index] > '9' || bus.arg[index] < '0')
                error_flag = 1;
        }
        if (error_flag == 1)
        {
            fprintf(stderr, "L%d: usage: push integer\n", line_number);
            fclose(bus.file);
            free(bus.content);
            free_stack(*stack_head);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        fclose(bus.file);
        free(bus.content);
        free_stack(*stack_head);
        exit(EXIT_FAILURE);
    }

    value = atoi(bus.arg);

    addnode(stack_head, value);
}
