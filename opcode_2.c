#include "monty.h"

/**
 * stk_swap - swaps the value of the first two elements on the stack
 * @stack: head to the stack
 * @ln: line number where opcode is located
 */

void stk_swap(stack_t **stack, unsigned int ln)
{
	stack_t *temp, *temp2;
	int temp_value;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", ln);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	temp_value = temp->n;
	temp->n = temp2->n;
	temp2->n = temp_value;
}

/**
 * stk_nop - operation does nothing
 * @stack: head to the stack
 * @ln: line number where opcode is located
 */
void stk_nop(stack_t **stack, unsigned int ln)
{
	(void) stack;
	(void) ln;
}
