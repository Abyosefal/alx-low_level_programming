#include <stdio.h>
/**
* main - prints
* Return: 0
*/
int main(void)
{
char a = 'A';
int b = 120;
long d = 145;
long long e = 52;
float c = 123.0f;
printf("Size of a char: %lu byte(s)", sizeof(char));
printf("Size of an int: %lu byte(s)", sizeof(int));
printf("Size of a long int: %lu byte(s)", sizeof(long));
printf("Size of a long long int: %lu byte(s)", sizeof(long long));
printf("Size of a float: %lu byte(s)", sizeof(float));
return (0);
}
