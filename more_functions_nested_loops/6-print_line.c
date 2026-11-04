#include "main.h"

/**
 * print_line - Draws a straight line using underscores
 * @n: Number of underscores to print
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
