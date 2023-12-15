#include "monty.h"

/**
 * f_queue - Sets the stack to queue mode.
 * @stack_head: Stack head
 * @line_number: Line number (unused)
 *
 * Description:
 * This function sets the stack to queue mode.
 * It changes the behavior of the stack operations to work as a queue.
 *
 * Return: No return value.
 */
void f_queue(stack_t **stack_head, __attribute__((unused)) unsigned int line_number)
{
    (void)stack_head;  /* Unused parameter */
    bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack (queue mode).
 * @head: Pointer to the head of the stack
 * @new_value: Value to be added to the queue
 *
 * Description:
 * This function adds a new node with the specified value to the tail of the stack.
 *
 * Return: No return value.
 */
void addqueue(stack_t **head, int new_value)
{
    stack_t *new_node, *current;

    current = *head;
    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    new_node->n = new_value;
    new_node->next = NULL;

    if (current == NULL)
    {
        /* If the stack is empty, set the new node as the head */
        *head = new_node;
        new_node->prev = NULL;
    }
    else
    {
        /* Traverse to the end of the stack and add the new node */
        while (current->next)
            current = current->next;

        current->next = new_node;
        new_node->prev = current;
    }
}
