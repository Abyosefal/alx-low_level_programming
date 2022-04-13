#include "_putchar.h"
/**
* jack_bauer - counts every minute of the day and prints it
* Return: void
*/
void jack_bauer(void)
{
int m0, m1, h0, h1;
	for (m0 = 0; m0 <= 2; m0++)
	{
		for (m1 = 0; m1 < 4; m1++)
		{
			for (h0 = 0; h0 < 6; h0++)
			{
				for (h1 = 0; h1 <= 9; h1++)
				{
					_putchar(m0 + '0');
					_putchar(m1 + '0');
					_putchar(':');
					_putchar(h0 + '0');
					_putchar(h1 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
