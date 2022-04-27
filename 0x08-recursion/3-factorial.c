/**
 * factorial - returns factorial of given number
 * @n: given number to factorial
 * Return: int
 */

float factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (n * factorial(n + 1));
}
