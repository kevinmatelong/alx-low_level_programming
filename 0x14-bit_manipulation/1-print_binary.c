#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: the number to be printed in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int mask;

	i = 0;
	for (j = 63; j >= 0; j--)
	{
		mask = (n >> 1) & 1; /* shift mask right by 1 bit */
		if (mask == 1)
			i = 1;
		if (i == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');

}
