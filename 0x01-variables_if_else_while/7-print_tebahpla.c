#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 */

/*
 * prints alphabet in reverse
 */int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');

	return (0);
}
