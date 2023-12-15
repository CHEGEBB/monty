#include "monty.h"

/**
 * f_add - Adds the top two elements of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number in the Monty file
 *
 * Description: This function adds the values of the top two elements of the
 * stack and replaces the second element with the result.
 *
 * Return: No return value
 */
void f_add(stack_t **head, unsigned int counter)
{
    stack_t *h;
    int len = 0, aux;

    h = *head;

    /* Count the number of elements in the stack */
    while (h)
    {
        h = h->next;
        len++;
    }

    /* Check if there are at least two elements in the stack */
    if (len < 2)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Retrieve the top two elements, add them, and update the stack */
    h = *head;
    aux = h->n + h->next->n;
    h->next->n = aux;
    *head = h->next;
    free(h);
}
