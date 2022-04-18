#include "main.h"
/**
* puts2 - writes a string jumping every other char to stdout
* @str: string passed to the function to be printed
* Return: nothing
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
