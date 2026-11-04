#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row = 0;
	int col;
	int result;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			result = row * col;

			if (result >= 10)
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (row * (col + 1) < 10)
					_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
