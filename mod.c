#include "monty.h"

/**
 * f_mod - Computes the remainder of the division of the second top element
 *         by the top element of the stack
 * @head: Pointer to the stack's head
 * @counter: Current line number in the script
 * Return: No return value
 *
 * Description:
 * - This function computes the remainder of the division of the second top
 *   element by the top element of the stack.
 * - It checks if the stack contains at least two elements before performing the operation.
 * - If the stack has fewer than two elements, an error message is displayed, and the program exits.
 * - The line number of the script where the error occurred is also indicated.
 * - If the top element is 0, a division by zero error is displayed, and the program exits.
 * - The result of the modulus operation is stored in the second top element of the stack.
 * - The top element is removed from the stack after the modulus operation.
 */
void f_mod(stack_t **head, unsigned int counter)
{
    stack_t *temp;
    int num_nodes = 0, result;

    temp = *head;

    /* Count the number of nodes in the stack */
    while (temp)
    {
        temp = temp->next;
        num_nodes++;
    }

    /* Check if there are at least two elements in the stack */
    if (num_nodes < 2)
    {
        /* Display an error message and terminate if the stack is too short */
        fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    temp = *head;

    /* Check for division by zero */
    if (temp->n == 0)
    {
        /* Display an error message and terminate if division by zero is attempted */
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Perform modulus operation and store the result in the second top element */
    result = temp->next->n % temp->n;
    temp->next->n = result;

    /* Update the stack head to the second top element */
    *head = temp->next;

    /* Free the memory of the removed top element */
    free(temp);
}
