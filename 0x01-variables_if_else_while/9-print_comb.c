#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 *
 *
 * prints all possible combos of single-digit numbers
 */ int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
