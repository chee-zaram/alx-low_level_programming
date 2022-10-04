#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: Pointer to string to be split.
 *
 * Return: Returns pointer to an array of strings,
 * if failed to allocate memory, returns NULL.
 */
char **strtow(char *str)
{
	int x, y, w, len, height, j = 0;
	char **mptr;

	len = _strlen(str);
	height = word_count(str);
	if (str == NULL || *str == 0 || height == 0)
		return (NULL);
	mptr = (char **)malloc(sizeof(char *) * height + 1);

	if (mptr == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		*(mptr + x) = (char *)malloc(sizeof(char) * len + 1);
		if (*(mptr + x) == NULL)
			return (NULL);
	}
	for (x = 0, w = NO_WORD; x < height; x++, w = NO_WORD)
	{
		for (y = 0; y < len; j++)
		{
			if (*(str + j) == ' ' && w)
			{
				*(*(mptr + x) + y) = '\0';
				j++;
				break;
			}
			else if (*(str + j) == ' ' && !w)
				continue;
			if (*(str + j) != ' ')
			{
				*(*(mptr + x) + y) = *(str + j);
				y++;
				w = WORD;
			}
		}
	}
	*(*(mptr + (x - 1)) + y) = '\0';
	*(mptr + height) = NULL;
	return (mptr);
}

/**
 * _strlen - Gets the length of a string.
 * @str: Pointer to string to be counted.
 *
 * Return: Returns number of elements in string.
 */
int _strlen(char *str)
{
	if (*str == 0)
		return (0);
	return (1 + _strlen(str + 1));
}

/**
 * word_count - Counts the number of words in a string.
 * @str: Pointer to string.
 *
 * Return: Returns the number of words in the string.
 */
int word_count(char *str)
{
	int i, word = NO_WORD, count = 0;

	for (i = 0; (*(str + i)); i++)
	{
		if (*(str + i) == ' ')
		{
			word = NO_WORD;
		}
		else if (!word)
		{
			word = WORD;
			count++;
		}
	}
	return (count);
}

