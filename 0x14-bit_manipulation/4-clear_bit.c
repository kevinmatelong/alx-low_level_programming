#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to modify
 * @index: the index of the bit to clear, starting from 0
 *Return: 1 if the operation was successful, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1); /* index out of range */

	mask = 1; /* create a mask with a 0 bit at the given index */
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask; /* perform a bitwise AND operation to clear the bit*/

	return (1); /* operation successful */
}
