#include "monty.h"

/**
 * f_sub - Subtracts top element from the second top element
 * @head: Pointer to the stack's head
 * @counter: Current line number in the script
 * Return: No return value
 *
 * Description:
 * - This function performs subtraction on the top two elements of the stack.
 * - It checks if the stack contains at least two elements before performing the operation.
 * - If the stack has fewer than two elements, an error message is displayed, and the program exits.
 * - The line number of the script where the error occurred is also indicated.
 * - The result of the subtraction is stored in the second top element of the stack.
 * - The top element is removed from the stack after the subtraction.
 */
void f_sub(stack_t **head, unsigned int counter)
{
    stack_t *temp;
    int difference, num_nodes;

    temp = *head;

    /* Count the number of nodes in the stack */
    for (num_nodes = 0; temp != NULL; num_nodes++)
        temp = temp->next;

    /* Check if there are at least two elements in the stack */
    if (num_nodes < 2)
    {
        /* Display an error message and terminate if the stack is too short */
        fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;

    /* Calculate the difference between the top two elements */
    difference = temp->next->n - temp->n;

    /* Store the result in the second top element */
    temp->next->n = difference;

    /* Update the stack head to the second top element */
    *head = temp->next;

    /* Free the memory of the removed top element */
    free(temp);
}
