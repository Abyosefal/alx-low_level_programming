#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: given number to factorial
 * Return: int
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
	{
		if (n >= -10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n + '0');
		return (n * factorial(n + 1));
	}
}
