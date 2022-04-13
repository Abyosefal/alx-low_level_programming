/**
* _islower - checks wether input is lower case or not
* @c automatic int var to take char input
* Return: 1 or 0
*/
int _islower(int c)
{
	if (c < 123 && c > 97)
		return (1);
	else
		return (0);
}
