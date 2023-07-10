#include "main.h"

/*
 * _isupper: checks whether a character is an uppercase letter
 *
 * Return: 1 if success, 0 otherwise
 *
 */int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))

		return (1);

	else
		return (0);
}
