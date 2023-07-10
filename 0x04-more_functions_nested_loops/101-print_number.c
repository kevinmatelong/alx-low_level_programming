#include "main.h"

/*
 * print_number - prints a number
 *
 * return: void
 *
 */void print_number(int n)
{
	unsigned int tens, ones, positive = n;
	double t_beg = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (t_beg <= positive)
			t_beg *= 10;
		tens = t_beg / 10;

		while (tens >= 1)
		{
			ones = positive / tens;
			_putchar(ones + '0');
			positive = (positive - (tens * ones));
			tens /= 10;
		}
	}
}
