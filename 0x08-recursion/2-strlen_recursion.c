/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i + 1);
}
