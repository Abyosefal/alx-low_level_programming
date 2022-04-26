/**
 * _memcpy - copies n bytes of the memory pointed by src to memory dest
 * @src: pointer to the loacation
 * @dest: the character to fill the memory
 * @n: the int count of memory locations
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
