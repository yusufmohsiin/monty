#include "monty.h"

/**
 * m_add - add the top two element of the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 *
 * Return: void
 */
void m_add(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't add, stack too short\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	i += (*stack)->i;
	m_pop(stack, line_number);
	(*stack)->n += n;
}
