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
				putchar(num + '0');
			else
			{
				putchar((num / 10) + '0');
				putchar((num % 10) + '0');
			}
		putchar(',');
		putchar(' ');
		}
	putchar('\n');
	}
}
