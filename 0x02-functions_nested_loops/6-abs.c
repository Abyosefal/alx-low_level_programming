/**
* _abs - returns the absolute value of inputed value
* @n: automatic int var to take input
* Return: abs value
*/
int _abs(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
