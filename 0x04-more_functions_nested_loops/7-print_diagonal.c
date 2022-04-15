#include "main.h"
/**
 * print_diagonal - print a diagonal line on given length
 * @n: given length of time
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < i; j++)
				_putchar(' ');
			_putchar(92);
		}
		_putchar('\n');
	}
}
