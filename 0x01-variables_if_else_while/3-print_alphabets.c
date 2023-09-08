#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and Upercase
 *
 * Return: 0 (End Program)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (cd <= 'z')
	{
		putchar(ch);
		ch++;
	}

        while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
