#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 *
 * prints alphabet 10 times
 */ void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		i++;

		putchar('\n');
	}
}
