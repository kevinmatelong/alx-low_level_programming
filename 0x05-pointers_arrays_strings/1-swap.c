#include "main.h"

/*
 * swap_int - swaps two integers
 *
 * Return: void
 */void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b  = tmp;
}
