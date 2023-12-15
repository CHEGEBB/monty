#include "monty.h"

/**
 * add_node_to_stack - Adds a new node to the head of the stack.
 * @head: Pointer to the head of the stack
 * @new_value: Value to be added to the new node
 *
 * Description: This function creates a new node, adds it to the head of
 * the stack, and updates the pointers accordingly.
 *
 * Return: No return value
 */
void add_node_to_stack(stack_t **head, int new_value)
{
    stack_t *new_node, *current_top;

    current_top = *head;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    /* Update pointers to add the new node to the head of the stack */
    if (current_top != NULL)
        current_top->prev = new_node;

    new_node->n = new_value;
    new_node->next = current_top;
    new_node->prev = NULL;
    
    /* Update the head pointer to point to the new node */
    *head = new_node;
}
