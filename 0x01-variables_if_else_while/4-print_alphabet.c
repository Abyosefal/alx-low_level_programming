#include <stdio.h>
/**
* main - prints alphabets except q and e
* Return:0
*/
int main(void)
{
unsigned char a;
int i;
a = 'a';
for (i = 0; i < 26; i++)
{
if (a == 'e' || a == 'q')
continue;
else
putchar(a);
a++;
}
putchar('\n');
return (0);
}
