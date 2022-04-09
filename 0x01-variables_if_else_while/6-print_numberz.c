#include <stdio.h>
/**
* main - prints numbers using putchar
* Return:0
*/
int main(void)
{
int i;
long int j = 9876543210;
for (i = 0; i <= 9; i++)
{
putchar(j % 10);
j = j % 10;
}
putchar('\n');
return (0);
}
