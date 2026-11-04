#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int row = 0;
	int n;

	while (row < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		row++;
	}
}
