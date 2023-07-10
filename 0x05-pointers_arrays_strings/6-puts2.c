#include "main.h"

/*
 * _strlen - finds length of s
 *
 * returns: lenght (i)
 *
 */int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/*
 * puts2: prints every other character of a string
 *
 * return: void
 *
 */void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
