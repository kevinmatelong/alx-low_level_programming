#include "main.h"

/*
 * print_rev: prints a string in reverse
 *
 * Return: void
 *
 */void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
