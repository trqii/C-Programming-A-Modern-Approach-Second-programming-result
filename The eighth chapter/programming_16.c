#include<stdio.h>
#include<ctype.h>

int main()
{
	int compare[26] = {0};
	char ch;
	int i;

	printf("Enter first word: ");
	while((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		compare[ch - 'A']++;
	}

	printf("Enter second word: ");
	while((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		compare[ch - 'A']--;
	}

	for(i = 0; i < 26; i++)
	{
		if(compare[i] != 0)
		{
			printf("The words are not anagrams.\n");
			break;
		}
	}
	if(i == 26)
		printf("The words are anagrams.\n");

	return 0;
}