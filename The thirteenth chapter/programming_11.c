#include <stdio.h>

double compute_verage_word(const char* sentence);

int main()
{
	char sentence[50] = { 0 };

	printf("Enter a sentence:");
	gets(sentence);

	printf("Average word length: %.2f\n", compute_verage_word(sentence));

	return 0;
}

double compute_verage_word(const char* sentence)
{
	char ch;
	int count = 0;
	int word_num = 1;

	while (ch = *sentence++)
	{
		if (ch != ' ')
		{
			count++;
		}
		else
		{
			word_num++;
		}
	}

	return (double)count / word_num;
}
