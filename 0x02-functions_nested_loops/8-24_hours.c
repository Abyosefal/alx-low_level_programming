#include "_putchar.h"
/**
* jack_bauer - counts every minute of the day and prints it
* Return: void
*/
void jack_bauer(void)
{
int m0, m1, h0, h1;
	for (h0 = 0; h0 <= 2; h0++)
	{
		for (h1 = 0; h1 <= 9; h1++)
		{
			for (m0 = 0; m0 < 6; m0++)
			{
				for (m1 = 0; m1 <= 9; m1++)
				{
					_putchar(h0 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m0 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
					if (h0 == 2 && h1 == 3 && m0 == 5 && m1 == 9)
					break;
				}
			}
			if (h0 == 2 && h1 == 3 && m0 == 5 && m1 == 9)
			break;
		}
	}
}
