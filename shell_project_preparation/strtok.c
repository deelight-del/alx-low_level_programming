#include <string.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
/**
  *count_words - Function to count the number of spaces in a string
  *@str: String to count the spaces for
  *
  *Return: >= 0 if successful, and -1 otherwise
  */

int count_words(char *str)
{
	char *s, *token;
	int count = 0;

	if (str == NULL)
		return (-1);

	s = strdup(str);
	if (s == NULL)
		return (-1);

	token = strtok(s, " ");

	while (token != NULL)
	{
		count++;
		token = strtok(NULL, " ");
	}
	free(s);
	return (count);
}

/**
  *string_to_tokens - Function to split string to array of tokens seperated
  *by space
  *@string: String to be split into tokens
  *Return: An array of strings
  */

char **string_to_tokens(char *string)
{
	int count, i, j;
	char **string_array;
	char *string_cpy, *token;

	if ((string_cpy = strdup(string)) == NULL)
		return (NULL);

	if((count = count_words(string)) <= 0)
	{
		free(string_cpy);
		return (NULL);
	}
	string_array = malloc(sizeof(char *) * (count + 1));
	if (string_array == NULL)
	{
		free(string_cpy);
		return (NULL);
	}
	token = strtok(string_cpy, " ");
	for (i = 0; token != NULL; i++)
	{
		string_array[i] = strdup(token);
		if (string_array[i] == NULL)
		{
			for (j = 0; j <= i; i++)
				free(string_array[j]);
			free(string_array);
			free(string_cpy);
		}
		token = strtok(NULL, " ");
	}
	string_array[i] = token; /*NULL terminating array*/
	free(string_cpy);
	return (string_array);
}


/**
  *print_string_array - Function to print the string in an array
  *@str_array: array of strings
  *
  *Return: 0, if successful
  */

int print_string_array(char **str_array)
{
	char *str = "placeholder";
	int i = 0, j;

	for(i = 0; str != NULL; i++)
	{
		str = str_array[i];
		if (str != NULL)
		{
			if (i == 0)
				printf("%s", str);
			else
				printf("...%s", str);
		}
	}
	printf("\n");
	for (j = 0; j < i; j++)
		free(str_array[j]);
	free(str_array);
	return (0);
}

/**
int main(void)
{
	int words;
	char *str;
	char **str_array;

	(void) str_array;

	words = count_words("There are six    words in here");
	printf("There are six words in here: %d\n", words);
	words = count_words("The");
	printf("There is only one word here: %d\n", words);
	words = count_words("    ");
	printf("There are no words in here: %d\n", words);
	words = count_words(NULL);
	printf("There are error words here: %d\n", words);
	words = count_words("  There are six    words in here");
	printf("There are six words in here: %d\n", words);
	printf("...........................................................\n");
	str = "This is the first string to print the array of";
	printf("%s\n", str);
	str_array = string_to_tokens(str);
	print_string_array(str_array);

	return (0);
}
*/
