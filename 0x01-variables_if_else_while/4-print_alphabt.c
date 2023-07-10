#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 */

/*
 * prints alphabet in lowercase
 * excluding 'q' and 'e'
 */ int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
