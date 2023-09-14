#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *	shoud be printed
*/

void print_diagonal(int n)
{
	int post, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (post = 1; space <= n; post++)
		{
			for (space = 1; space <= post; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
