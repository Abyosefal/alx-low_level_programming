#include "_putchar.h"
/**
* times_table - counts every minute of the day and prints it
* Return: void
*/
void times_table(void)
{
int i, j, num;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;
			if (num < 10)
				_putchar(num + '0');
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		_putchar(',');
		_putchar(' ');
		}
	_putchar('\n');
	}
}
