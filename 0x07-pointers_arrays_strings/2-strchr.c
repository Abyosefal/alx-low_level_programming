/**
 * _strchr - returns the pointer to the first occurance of char c
 * @c: char to be searched
 * @s: string containing the char
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
			return (s[j]);
		j++;
	}
	return ("NULL");
}
