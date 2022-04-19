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
	for (i = 0; i < n; i++)
	{
		printf("%d",a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
