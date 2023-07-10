#include <stdio.h>
#include <stdlib.h>

/*
 * main - Entry point
 *
 * Return: Always 0(Success)
 *
 * prints sum of even numbers in fibonacci sequence below 4 million
 *
 */int main(void)
{
	int sum = 0;
	int a;
	int b;
	int evens = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		evens = a + b;
		a = b;
		b = evens;
		if ((evens <= 4000000) && (evens % 2 == 0))
			sum += evens;
	}
	printf("%d\n", sum);

	return (0);
}

