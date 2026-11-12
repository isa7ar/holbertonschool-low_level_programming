
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer, or 0 if no digits
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int result;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	if (sign == -1)
		return (-result);

	return (result);
}

