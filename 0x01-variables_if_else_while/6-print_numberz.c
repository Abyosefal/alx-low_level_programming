#include <stdio.h>
/**
* main - prints numbers using putchar
* Return:0
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i%10);
}
putchar('\n');
return (0);
}
