
#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>


void read_word(int counts[26])
{
	char ch;

	while((ch = getchar()) != '\n')
	{
		if(isalpha(ch))
		{
			ch = toupper(ch);
			counts[ch - 'A']++;
		}
	}
}

bool equal_array(int counts1[26], int counts2[26])
{
	int key = 0;

	for(int i = 0; i < 26; i++)
	{
		if(counts1[i] - counts2[i] == 0)
		{
			key++;
		}
	}

	return key == 26;
}
int main()
{
	int ch1[26] = {0};
	int ch2[26] = {0};

	printf("Enter first word: ");
	read_word(ch1);
	printf("Enter second word: ");
	read_word(ch2);

	if(equal_array(ch1, ch2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	return 0;
}