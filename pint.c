#include "monty.h"

/**
 * f_pint - Outputs the top element of the stack
 * @head: Pointer to the stack's head
 * @counter: Current line number in the script
 * Return: No return value
 *
 * Description:
 * - This function prints the top element of the stack without modifying the stack.
 * - It checks if the stack is empty before attempting to print.
 * - If the stack is empty, an error message is displayed, and the program exits.
 * - The line number of the script where the error occurred is also indicated.
 * - The function does not alter the state of the stack.
 */
void f_pint(stack_t **head, unsigned int counter)
{
    /* Validate if the stack is empty */
    if (*head == NULL)
    {
        /* Display an error message and terminate if the stack is empty */
        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Print the top element of the stack without modifying the stack */
    printf("%d\n", (*head)->n);
}
