#include "main.h"
/**
* _puts - writes a string to stdout followed by a new line
* @str: string passed to the function to be printed
* Return: nothing
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
