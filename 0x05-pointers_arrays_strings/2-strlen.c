/**
* _strlen - returns length of an input string
* @s: pointer to input string
* Return: length of the string as int
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
