#include "monty.h"

/**
 * free_stack - Frees a doubly linked list representing a stack.
 * @head: Pointer to the head of the stack.
 *
 * Description:
 * This function iterates through the doubly linked list,
 * starting from the head, and frees each node. The pointer
 * to the head is updated as the list is traversed.
 */
void free_stack(stack_t *head)
{
    stack_t *current;  // Pointer to the current node being freed

    current = head;  // Initialize the current pointer to the head

    // Iterate through the doubly linked list
    while (head)
    {
        current = head->next;  // Move to the next node
        free(head);  // Free the current node
        head = current;  // Update the head to the next node
    }
}
