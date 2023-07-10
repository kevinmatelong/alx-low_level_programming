#include "main.h"

/*
 * _abs - Entry point
 *
 * Return: Always 0(Success)
 *
 * gives absolute value of a number
 *
 */ int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (0);
	}
	return (0);
}
