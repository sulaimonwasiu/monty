#include "monty.h"

/**
 * get_opcode_func - selects the correct function to perform the opcode
 * @s: opcode passed to the program
 * Return: a pointer to the function given the opcode or NULL if not found
 */

void (*get_opcode_func(char *s))(stack_t **stack, unsigned int ln)
{

	int i;
	instruction_t stk[] = {
		{"pall", stk_pall},
		{"push", stk_push},
		{"pop", stk_pop},
		{"add", stk_add},
		{"swap", stk_swap},
		{"pint", stk_pint},
		{"nop", stk_nop},
		{"sub", stk_sub},
		{"div", stk_div},
		{"mul", stk_mul},
		{"mod", stk_mod},
		{"pchar", stk_pchar},
		{"pstr", stk_pstr},
		{"rotr", stk_rotr},
		{"rotl", stk_rotl},
		{"stack", stk_stack},
		{"queue", stk_queue},
		{NULL, NULL}
	};

	i = 0;
	while (i < 17)
	{
		if (strcmp(s, (stk[i]).opcode) == 0)
		{
			return (*(stk[i]).f);
		}
		i++;
	}
	return (NULL);
}
