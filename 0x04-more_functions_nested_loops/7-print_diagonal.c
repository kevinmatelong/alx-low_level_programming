#include "main.h"

/*
 * print_diagonal - prints a diagonal to stdout
 *
 * return: void
 *
 */void print_diagonal(int n)
{
	int space;
	int slash;

	if (n > 0)
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space < slash; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
