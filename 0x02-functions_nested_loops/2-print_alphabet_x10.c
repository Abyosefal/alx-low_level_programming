#include "_putchar.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times
* Return:0
*/
void print_alphabet_x10(void)
{
unsigned char a = 'a';
int i, j;
for (j = 0; j < 10; j++)
{
	for (i = 0; i < 26; i++)
	{
		_putchar(a);
		a++;
	}
}
_putchar('\n');
}
