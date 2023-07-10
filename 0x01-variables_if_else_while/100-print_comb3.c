#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 *
 *
 * prints all possible combinations of two digits, without duplications
 */ int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*increment ones*/
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9') /*prints commas and spaces*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
