#include "main.h"

/*
 * reverses_array - reverses the members of an array
 *
 * Return: void
 *
 */void reverse_array(int *a, int n)
{

	int tmp, start = 0;
	int end = n - 1;

	while (start < end)
	{
		tmp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = tmp;
		start++, end--;
	}
}
