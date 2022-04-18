#include "main.h"
/**
* print_rev - writes a string to stdout in reverse order
* @s: string passed to the function to be printed
* Return: nothing
*/
void print_rev(char *s)
{
	int i, j;
	char arr[];

	i = 0;
	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	for (j = i; j >= 0; j--)
		_putchar(arr[j]);
	_putchar('\n');
}
