#include "main.h"

/*
 * _strlen: returns the lenghth of a string
 *
 * Return: int
 *
 */int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);

}
