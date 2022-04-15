/**
 * _isdigit - checks for given int and returns 1 if is between 1 and 9
 * @c: input int
 * Return: 1 if is digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);
}
