#include "main.h"

/**
 * _strlen - takes a pointer to an char parameter
 *		and return length
 *
 * @s: char parameter
 *
 * Return: length
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
