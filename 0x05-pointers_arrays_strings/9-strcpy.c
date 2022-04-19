/**
* *_strcpy - copies string from one var to other using pointer
* @dest: str copy to
* @src: str original pointer
* Return: char
*/
void _strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do
	{
		dest[i] = src[i];
		i++;
	}while (src[i] != '\0')
	dest[i] = '\0';
}
