#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 */

/*
 * prints alphabet in lowercase and uppercase
 *
 */ int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
