/**
 * _isupper - checks for characters and returns 1 if is uppercase
 * @c: input char as int
 * Return: 1 if is upper else 0
 */

int _isupper(int c)
{
	if (c > 40 && c < 91)
		return (1);
	else
		return (0);
}
