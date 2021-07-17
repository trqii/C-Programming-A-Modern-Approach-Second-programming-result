#include<stdio.h>

int main()
{
	int ch, blank = 0, word = 0;

	printf("Enter a sentence: ");
	while((ch = getchar()) != '\n')
	{
		if(ch == ' ')
			blank++;
		else
			word++;
	}
	printf("Average word length: %.1f\n", word / (blank + 1.0));

	return 0;
}
