#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool are_anagrams(const char* word1, const char* word2);

int main()
{
	char word1[30] = { 0 };
	char word2[30] = { 0 };

	printf("Enter first word: ");
	gets(word1);

	printf("Enter Second word: ");
	gets(word2);

	if (are_anagrams(word1, word2))
	{
		printf("The words are anagrams.");
	}
	else
	{
		printf("The words are not anagrams.");
	}

	return 0;
}

bool are_anagrams(const char* word1, const char* word2)
{
	int ch[26] = { 0 };

	while (*word1)
	{
		if (isalpha(*word1))
		{
			ch[toupper(*word1) - 'A']++;
		}
		word1++;
	}

	while (*word2)
	{
		if (isalpha(*word2))
		{
			ch[toupper(*word2) - 'A']--;
		}
		word2++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (ch[i] != 0)
		{
			return false;
		}
	}
	return true;
}

