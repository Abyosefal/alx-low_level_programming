#include <stdio.h>
/**
* main - prints alphabets
* Return:0
*/
int main(void)
{
unsigned char a;
int i;
a = 'z';
for (i = 0; i < 26; i++)
{
putchar(a);
a--;
}
putchar('\n');
return (0);
}
