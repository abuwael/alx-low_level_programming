#include "main.h"

/**
 * *_strchr - function returns a pointer to the first
 *occurrence of the character c in the string s.
 *
 * @s: string to search from.
 * @c: char to find.
 *
 * Return: c if found else 0
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
