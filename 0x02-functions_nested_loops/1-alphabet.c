#include "main"
/**
* print_alphabet - prints the alphabet
* Return:0
*/
void print_alphabet(void)
{
unsigned char a = 'a';
int i;
for (i = 0; i < 26; i++)
{
	_putchar(a);
	a++;
}
_putchar('\n');
}
