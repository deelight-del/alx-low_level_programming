#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *get_len - used to obtain the length of unsigned long int as a binar
  *@n: unsigned long int to evaluate
  *
  *Return: length of the variable
  */

int get_len(unsigned long int n)
{
	int i = 0;

	if (n == 0 || n == 1)
		return (1);

	while (n)
	{
		n = n / 2;
		i++;
	}
	return (i);
}

/**
  *save_to_str - function to save our respective value
  *@n: value to save our
  *
  *Return: A pointer to a string
  */

char *save_to_str(unsigned long int n)
{
	char *str;
	int len_int = get_len(n), i;

	str = malloc(sizeof(char) * len_int);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_int; i++)
	{
		str[i] = (int)((n >> i) & 1) + 48;
	}
	return (str);
}

/**
  *get_bit - get the bit at a given index
  *@n: The value to obtain
  *@index: The index to obtain from
  *
  *Return: integer value of the retrived index value
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = get_len(n), ret_value;
	char *str;

	if (index >= len)
		return (-1);
	str = save_to_str(n);
	if (str == NULL)
		return (-1);
	if (n == 0 || n == 1)
	{
		ret_value = (int)n;
	}
	else
		ret_value = (int)(str[index] - 48);

	free(str);

	return (ret_value);
}
