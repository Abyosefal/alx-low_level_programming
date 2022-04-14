#include "_putchar.h"
/**
* print_to_98 - prints all naturel numbers from input to 98
* @a: input int
* Return: void
*/
void print_to_98(int a)
{
	int i;

	if ((a <= 98 && a >= 0) || a < 0)
	{
		for (i = a; i < 99; i++)
		{
			if (i < 10)
			{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			}
			else if (i >= 10 && i < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (i >= 100 && i < 1000)
			{
				_putchar(i / 100 + '0');
				_putchar((i % 100) / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (a > 98)
	{
		for (i = a; i < 99; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
