#include <stdio.h>
/**
* main - prints hex numbers and letters using putchar
* Return:0
*/
int main(void)
{
int i;
int j;
unsigned char a = 'a';
for (i = 0; i < 10; i++)
putchar(i + '0');
for (j = 0; j < 6; j++)
{
putchar (a);
a++;
}
putchar('\n');
return (0);
}
