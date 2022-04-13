#include "_putchar.h"
/**
* print_sign - checks wether input is positive, zero or negative
* @n: automatic int var to take input
* Return: 1 or 0
*/
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
