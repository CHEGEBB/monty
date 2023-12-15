#include "monty.h"

/**
 * divide_top_two_elements - Divides the second element by the top element.
 * @head: Pointer to the stack head
 * @counter: Line number in the Monty file
 *
 * Description: This function divides the value of the second element of the
 * stack by the value of the top element. The result replaces the second element.
 *
 * Return: No return value
 */
void divide_top_two_elements(stack_t **head, unsigned int counter)
{
    stack_t *current_element;
    int stack_size, result;

    current_element = *head;

    /* Count the number of elements in the stack */
    while (current_element)
    {
        current_element = current_element->next;
        stack_size++;
    }

    /* Check if there are at least two elements in the stack */
    if (stack_size < 2)
    {
        fprintf(stderr, "L%d: can't div, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    current_element = *head;

    /* Check for division by zero */
    if (current_element->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    /* Perform the division and update the stack */
    result = current_element->next->n / current_element->n;
    current_element->next->n = result;
    *head = current_element->next;
    free(current_element);
}
