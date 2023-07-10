#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the first number
 * @m: the second number
 *Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1; /* add 1 if the least significant bit of xor is 1 */
		xor >>= 1; /* shift xor to the right by 1 bit */
	}

	return (count);
}
