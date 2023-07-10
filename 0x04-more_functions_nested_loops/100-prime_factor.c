#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 * finds and prints the largest prime factor of 612852475143
 *
 */int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 2;

	while (factor < num)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor = 2;
		}
		else
			factor++;
	}
	printf("%lu\n", num);
	return (0);
}
