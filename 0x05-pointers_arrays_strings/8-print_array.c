#include <stdio.h>
#include "main.h"
/**
* print_array - prints n elements of an array of int
* @a: array passed to the function to be printed
* @n: number of arrays to be printed
* Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	printf("%p",a);
	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
