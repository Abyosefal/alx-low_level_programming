#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to the string
 */

void _puts_recursion(char *s)
{
	if (s != '\0')
	{
		_puts(s);
		_puts_recursion(s+i);
		i++;
	}
	_puts('\n');
}
