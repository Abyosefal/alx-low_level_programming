/**
* rev_string - reverses a string
* @s: string passed to the function to be reversed
* Return: nothing
*/
void rev_string(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	char arr[len];

	for (j = 0; j < len; j++)
	{
		arr[j] = s[len - j];
	}
	s = arr;

}
