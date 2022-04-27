/**
 * _is_prime_number - returns 1 if n is prime, else 0
 * @n:number to be tested
 * Return: int
 */

int _is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 10 == 0)
		return (0);
	else
		return (1);
}
