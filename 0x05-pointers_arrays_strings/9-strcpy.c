#include <stdio.h>
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
	while (src[i] != '\0')
	{
		printf(str[i]);
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
