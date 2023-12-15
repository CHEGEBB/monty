#include "monty.h"

/**
 * f_pop - Removes the top element from the stack
 * @head: Pointer to the stack's head
 * @counter: Current line number in the script
 * Return: No return value
 *
 * Description:
 * - This function removes the top element from the stack without altering the stack's structure.
 * - It checks if the stack is empty before attempting to remove an element.
 * - If the stack is empty, an error message is displayed, and the program exits.
 * - The line number of the script where the error occurred is also indicated.
 * - The function frees the memory of the removed element and adjusts the stack head accordingly.
 */
void f_pop(stack_t **head, unsigned int counter)
{
    stack_t *h;

    /* Validate if the stack is empty */
    if (*head == NULL)
    {
        /* Display an error message and terminate if the stack is empty */
        fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Save the current stack head for freeing later */
    h = *head;

    /* Update the stack head to the next element */
    *head = h->next;

    /* Free the memory of the removed element */
    free(h);
    
    return; // No changes to the return statement
}
