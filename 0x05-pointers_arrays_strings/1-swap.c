/**
* swap_int - swaps the value of two integers
* @a: input pointer variable
* @b: input pointer variable
* Returns: nothing
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
