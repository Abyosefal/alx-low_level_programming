#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: pointer to the string
 */

void _print_rev_recursion(char *s)
{
	int i, j;

	i = 0;
	while (*s != '\0')
		i++;
	j = ++i;
	while (j > 0)
	{
		_putchar(*s + j);
		_print_rev_recursion(s + j - 1);
		j--;
	}
}
