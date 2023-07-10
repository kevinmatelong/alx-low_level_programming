#include "main.h"

/*
 * _islower - Entry point
 *
 * Return: 1 if success, 0 otherwise
 *
 * Checks for lowercase character
 *
 */int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
