#include <stdio.h>
#include "main.h"
#include <stdbool.h>
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
