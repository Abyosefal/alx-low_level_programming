/**
 * _isupper - checks for characters and returns 1 if is uppercase
 * @c: input char as int
 * Return: 1 if is upper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
