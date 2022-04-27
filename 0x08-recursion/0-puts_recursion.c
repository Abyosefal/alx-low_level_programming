#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		_puts(s[i]);
		_puts_recursion(s[i]);
		i++;
	}
	_puts('\n');
}
