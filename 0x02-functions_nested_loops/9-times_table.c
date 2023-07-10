#include "main.h"

/*
 * times_table - Entry point
 *
 * Return: void
 *
 * prnts 9 times table
 *
 */ void times_table(void)
{
	int column, row, ones, tens, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			tens = result / 10;
			ones = result % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
