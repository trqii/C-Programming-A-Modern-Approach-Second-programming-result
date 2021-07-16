#include<stdio.h>
#include<ctype.h>

int main()
{
	int ch, count = 0;

	printf("Enter a sentence: ");

	while((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
			count++;
	}
	printf("Your sentence contains %d vowels.\n", count);

	return 0;
}