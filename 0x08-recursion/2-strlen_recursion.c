/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i, *j;

	i = 0;
	j = &i;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		*j++;
	}
	return (i + 1);
}
