#include "main.h"

/*
 * _puts - prrints a string to stdout
 *
 * Return: a string
 *
 */void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
