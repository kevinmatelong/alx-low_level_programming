#include "main.h"

/*
 * _isalpha - Entry point
 *
 * Return: 1 if success, 0 otherwise
 *
 * checks for alphabetic character
 *
 */ int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
