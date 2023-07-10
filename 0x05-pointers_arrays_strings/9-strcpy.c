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

/*
 * *_strcpy: copies a string into another
 *
 * return: address pointer
 *
 */char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
