#include"main.h"

/**
 * print_most_numbers - print 0 -9 apart
 *		from 2 and 4 and you can
 *		only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50)
		{
			if (num != 52)
			{
				_putchar(num);
			}
		}
	}
	_putchar('\n');
}
