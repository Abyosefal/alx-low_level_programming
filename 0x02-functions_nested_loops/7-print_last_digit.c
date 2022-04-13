#include "_putchar.h"
/**
* print_last_digit - print last digit of a number
* @n: automatic int var to take input
* Return: last digit of the number
*/
int print_last_digit(int n)
{
int last;
long int m = n;
if (m < 0)
	m = (-1 * m);
last = m % 10;
_putchar(last + '0');
return (last);
}
