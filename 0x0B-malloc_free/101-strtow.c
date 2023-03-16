#include "main.h"

/**
 * getWordCount - gets the number of words in the string
 * @str: string to probe
 * @wordCount: Address of the variable to hold word count
 *
 * Return: Address of the @wordCount
 */
static size_t *getWordCount(char *str, size_t *wordCount)
{
	size_t i = 0, inWord = FALSE;

	for (i = 0; str[i]; i++)
	{
		if (inWord == FALSE && str[i] != 32)
			(*wordCount)++, inWord = TRUE;
		else if (inWord == TRUE && str[i] == 32)
			inWord = FALSE;
	}

	return (wordCount);
}

/**
 * getWordLen - gets the length of the current new word
 * @str: string to get word from
 * @start: index of the first character in the word
 * @end: length of thw word
 */
static void getWordLen(char *str, size_t *start, size_t *end)
{
	while (str[*start] == 32)
		(*start)++;

	while (str[*start + *end] && str[*start + *end] != 32)
		(*end)++;
}

/**
 * freeWords - frees up memory incase of a failure during processing
 * @words: Address of the first word in the array of words
 * @len: The number of words in array
 */
static void freeWords(char **words, size_t len)
{
	size_t k = 0;

	for (k = 0; k < len; k++)
		free(words[k]);
	free(words);
}

/**
 * strtow - convert words in a string to individual strings in an array
 * @str: a string to extract words from
 *
 * Return: Address of the first word in the array of words, or NULL on failure
 */
char **strtow(char *str)
{
	size_t i = 0, j = 0, wordCount = 0, wordLen = 0;
	char **words = NULL;

	if (!str || !*str)
		return (NULL);

	getWordCount(str, &wordCount);
	if (wordCount == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wordCount + 1));
	if (!words)
		return (NULL);

	for (i = 0; i < wordCount; i++)
	{
		wordLen = 0;
		getWordLen(str, &j, &wordLen);

		words[i] = malloc(sizeof(char) * (wordLen + 1));
		if (words[i] == NULL)
		{
			freeWords(words, i);
			return (NULL);
		}

		strncpy(words[i], &str[j], wordLen);
		words[i][wordLen] = '\0';
		j += wordLen;
	}
	words[wordCount] = NULL;

	return (words);
}
