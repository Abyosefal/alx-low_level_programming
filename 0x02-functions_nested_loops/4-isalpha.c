/**
* _isalpha - checks wether input is alphabet or not
* @c: automatic int var to take char input
* Return: 1 or 0
*/
int _isalpha(int c)
{
	if (c < 123 && c > 97 || c < 91 && c > 64)
		return (1);
	else
		return (0);
}
