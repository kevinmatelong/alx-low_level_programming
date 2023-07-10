#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 * prints fibonacci sequence
 *
 */int main(void)
{
	long int sum;
	long int a, b;
	int counter;

	sum = 0;
	a = 0;
	b = 1;
	counter = 0;

	while (counter < 49)
	{
		sum = a + b;
		printf("%li, ", sum);
		a = b;
		b = sum;

		counter++;
	}
	sum = a + b;
	printf("%li\n", sum);

	return (0);
}
