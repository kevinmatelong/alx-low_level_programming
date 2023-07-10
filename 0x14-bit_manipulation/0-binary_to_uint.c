#include "main.h"

/**
 * _strlen - returns length of string (modified)
 * @s: string to be determined
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - calculates the exponents
 * @base: base
 * @exp: exponent
 *
 * Return: result (int)
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to the string representation of the binary number
 *
 * Return: the converted number, or 0 if there is one or more
 *         chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num += (b[i] - '0') * power(2, len - i - 1);
	}

	return (num);
}
