#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using #
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int row = 1;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (row <= size)
	{
		col = 1;

		while (col <= size - row)
		{
			_putchar(' ');
			col++;
		}

		col = 1;
		while (col <= row)
		{
			_putchar('#');
			col++;
		}

		_putchar('\n');
		row++;
	}
}
