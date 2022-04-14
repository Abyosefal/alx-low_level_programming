#include "_putchar.c"
/**
* print_to_98 - prints all naturel numbers from input to 98
* @a: input int
* Return: void
*/
void print_to_98(int a)
{
	int i;

	for (i = a; i < 99; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
