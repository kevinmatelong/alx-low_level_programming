#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to modify
 * @index: the index of the bit to set, starting from 0
 *Return: 1 if the operation was successful, or -1 if an error  occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1); /* index out of range */

	mask = 1; /* create a mask with a 1 bit at the given index */

	*n = *n | (mask << index); /* perform a bitwise OR operation with the mask*/

	return (1); /* operation successful */
}
