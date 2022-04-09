#include <stdio.h>
/**
* main - prints numbers using putchar
* Return:0
*/
int main(void)
{
int i;
long int h = 100000000;
long int j = 9876543210;
for (i = 0; i <= 9; i++)
{
putchar(j % h);
j = j % h;
h = h / 10;
}
putchar('\n');
return (0);
}
