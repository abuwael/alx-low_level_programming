#include"main.h"

/**
 * *_memset - function fills the first n bytes
 * of the memory area pointed to by s with the constant byte c.
 *
 * @s: pointer to the block of memory to fill
 * @b: char to filled s with.
 * @n: number of byte than need to be filled
 *
 * Return: A pointer to filled memory result
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
