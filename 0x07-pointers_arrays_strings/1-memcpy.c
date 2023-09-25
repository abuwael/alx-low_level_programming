#include "main.h"

/**
 * *_memcpy - function  copies  n  bytes from memory
 * area src to memory area dest.
 *
 * @src: pointer to the block of memory to copy from.
 * @dest: pointer to the block of memory to copy to.
 * @n: size
 *
 * Return: A pointer to new memory result
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int iti;

	for (iti = 0; iti < n; i++)
	{
		dest[iti] = src[iti];
	}

	return (dest);
}
