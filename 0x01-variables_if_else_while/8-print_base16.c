#include <stdio.h>
/**
* main - prints hex numbers and letters using putchar
* Return:0
*/
int main(void)
{
int i;
unsigned char j;
for (i = 0; i < 10; i++)
putchar(i + '0');
for (j = 'a'; j < 'g'; j++)
putchar (j + '0');
putchar('\n');
return (0);
}
