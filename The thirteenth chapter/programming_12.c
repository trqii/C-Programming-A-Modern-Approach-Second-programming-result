#include <stdio.h>

int is_end(char *str, char *ch)
{
	while (*str++)
	{
		if ((*str == '!') || (*str == '.') || (*str == '?'))
		{
			*ch = *str;
			*str = '\0';
			return 1;
		}
	}
	return 0;
}

int main()
{
	char sentence[30][20] = { 0 };
	char ch;
	int i = 0;

	printf("Enter a sentence: ");
	while (i < 30)
	{
		scanf("%s", sentence[i]);
		if (is_end(sentence[i], &ch))
			break;
		i++;
	}

	printf("Reversal of sentence: ");
	for (i; i >= 0; i--)
		printf("%s ", sentence[i]);
	printf("\b%c\n", ch);

	return 0;
}