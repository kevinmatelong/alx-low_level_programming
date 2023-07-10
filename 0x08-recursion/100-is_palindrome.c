 #include "main.h"

/*
 * _strlen - finds length of a string
 * Author: Kevin Matelong
 */int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/*
 * comparison - parses through the string
 *
 */int comparison(char *beg, char *end)
{

	if (beg >= end)
		return (1);
	if (*beg == *end)
		return (comparison(beg + 1, end - 1));

	return (0);
}


/*
 * is_palindrome - checks whether a string is a palindrome
 *
 * Return: 1 if successful, 0 otherwise
 *
 */int is_palindrome(char *s)
{
	int i = _strlen(s);

	return (comparison(s, (s + (i - 1))));

}
