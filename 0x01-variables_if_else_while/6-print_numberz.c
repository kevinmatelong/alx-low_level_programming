#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 */

/*
 * prints single digit numbers
 */ int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
