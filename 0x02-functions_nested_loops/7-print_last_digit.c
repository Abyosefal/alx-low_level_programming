#include "_putchar.h"
#include <limits.h>
/**
* print_last_digit - print last digit of a number
* @n: automatic int var to take input
* Return: ;ast digit of the number
*/
int print_last_digit(unsigned long int n)
{
int last;
	if (n < 0)
		n = -1 * n;
	 last = n % 10;
	_putchar(last + '0');
	return (last);
}
