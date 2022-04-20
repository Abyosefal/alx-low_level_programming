/**
* *_strcat - concatenates two strings
* @dest: str cat to
* @src: str original pointer
* Return: char
*/
char _strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
