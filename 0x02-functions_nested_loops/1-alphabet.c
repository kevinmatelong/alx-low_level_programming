#include <stdio.h>
#include "main.h"

/*
 * main - Entry point
 * Return: Always 0(Success)
 *
 * prints alphabet in lowercase
 */void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
