/**
* _strlen - returns length of an input string
* @s: pointer to input string
* Return: length of the string as int
*/
int _strlen(char *s)
{
	int len, i;
	char arr[];

	arr[] = *s;
	len = 0;
	for (i = 0; ; i++)
	{
		if (arr[i] != 0)
			len++;
		else
			break;
	}
	return (len);
}
