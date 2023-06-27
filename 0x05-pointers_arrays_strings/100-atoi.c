#include <stdio.h>
#include "main.h"
#include <stdbool.h>
#include <limits.h>
/**
*_atoi - converts a string to an integer
*@s: string to convert to int
*
*Return: integer
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	bool started = false;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10)) 
			{
				if (sign == 1)
				{
					return INT_MAX;
				}
				else
				{
					return INT_MIN;
				}
			}
		result = result * 10 + (*s - '0');
		started = true;
		}
		else if (!started && *s == '-')
		{
			sign *= -1;
		}
		else if (started)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
