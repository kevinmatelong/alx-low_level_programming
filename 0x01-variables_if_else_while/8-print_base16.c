#include <stdio.h>

/*
 * main - Entry point
 * Return: Always 0(Success)
 */

/*
 * prints all base16 numbers in lowercase
 */ int main(void)
{
	int decimal = '0';
	int hexa = 'a';

	/* prints 0-9 */
	while (decimal <= '9')
	{
		putchar(decimal);
		decimal++;
	}

	/* prints a-f */
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}

	putchar('\n');

	return (0);
}
