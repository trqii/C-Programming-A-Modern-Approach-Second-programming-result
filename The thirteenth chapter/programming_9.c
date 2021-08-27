#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char* sentence);

int main()
{
	char str[30];

	printf("Enter a sentence: ");
	scanf("%s", &str);

	printf("Your sentence contains %d vowels.", compute_vowel_count(str));

	return 0;
}

int compute_vowel_count(const char* sentence)
{
	int n = 0;
	char t;
	while (t = tolower(*sentence++))
	{
		if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
		{
			n++;
		}
	}

	return n;
}
