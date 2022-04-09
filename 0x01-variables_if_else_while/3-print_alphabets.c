#include <stdio.h>
/**
* main - prints alphabets lower and upper
* Return:0
*/
int main(void)
{
unsigned char a;
unsigned char b;
int i;
int j;
a = 'a';
b = 'A';
for (i = 0; i < 26; i++)
{
putchar(a);
a++;
}
for (j = 0; j < 26; j++)
{
putchar(b);
b++;
putchar('\n');
}
return (0);
}
