#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * print_to_98 - Entry point
 *
 * Return: void
 *
 * prints numbers from n to 98
 *
 */ void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
