#include<stdio.h>

int main()
{
	char sentence[100];
	char ch;
	int i, j;
	int count = 0;

	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n')
	{
		if(ch == '.' || ch == '?' || ch == '!')
			break;
		sentence[count] = ch;
		count++;
	}

	printf("Reversal of sentence: ");
	for(i = --count; i >= 0; i--)
	{
		if(sentence[i] == ' ')
		{
			for(j = i + 1; j <= count; j++)
			{
				printf("%c", sentence[j]);
			}
			count = i - 1;
			printf(" ");
		}
	}	

	for(i = 0; i <= count; i++)
	{
		printf("%c", sentence[i]);
	}
	printf("%c\n", ch);
	
	return 0;
}