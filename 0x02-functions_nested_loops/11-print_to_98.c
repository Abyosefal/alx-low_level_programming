#include "_putchar.h"
/**
* print_to_98 - prints all naturel numbers from input to 98
* @a: input int
* Return: void
*/
void print_to_98(int a)
{
	int i,j;

	if ((a <= 98 && a >= 0) || a < 0)
	{
		for (i = a; i < 99; i++)
		{
			j = i;
			if (j < 0)
			{
				_putchar('-');
				j = -1 * j;
			}
			if (j >=0 && j < 10)
			{
				_putchar(j + '0');
			}
			else if (j >= 10 && j < 100)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else if (j >= 100 && j < 1000)
			{
				_putchar(j / 100 + '0');
				_putchar((j % 100) / 10 + '0');
				_putchar(j % 10 + '0');
			}
			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (a > 98)
	{
		for (i = a; i > 97; i--)
		{
			if (i >= 10 && i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i >= 100 && i < 1000)
			{
				_putchar(i / 100 + '0');
				_putchar((i % 100) / 10 + '0');
				_putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	}
	_putchar('\n');
}
