#include "main.h"

/*
 * print_triangle - prints a right-angled triangle to stdout
 *
 * Return: void
 *
 */void print_triangle(int size)
{
	int brick;
	int space;
	int height;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 1; height <= size; height++)
	{
		for (space = 1; space <= (size - height); space++)
		{
			_putchar(' ');
		}
		for (brick = 1; brick <= height; brick++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
