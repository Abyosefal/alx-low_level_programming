/**
 * _memset - fills the first n bytes of the meory pointed by s with constatn b
 * @s: pointer to the loacation
 * @b: the character to fill the memory
 * @n: the int count of memory locations
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
