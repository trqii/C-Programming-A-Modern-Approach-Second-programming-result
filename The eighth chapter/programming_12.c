#include<stdio.h>
#include<ctype.h>

int main()
{
	int value[26];
	int i;
	char ch = 'A';

	for(i = 0; i < 26; i++)
	{
		int n = 0;
		switch(ch)
		{
		case 'D': case 'G':
			n = 2;
			break;
		case 'B': case 'C': case 'M': case 'P':
			n = 3;
			break;
		case 'F': case 'H': case 'V': case 'W': case 'Y':
			n = 4;
			break;
		case 'K':
			n = 5;
			break;
		case 'J': case 'X':
			n = 8;
			break;
		case 'Q': case 'Z':
			n = 10;
			break;
		default:
			n = 1;
			break;
		}
		value[i] = n;
		ch++;
	}

	printf("Enter a word: ");
	i = 0;
	while((ch = getchar()) != '\n')
	{
		ch = toupper(ch);
		i += value[ch - 'A'];
	}
	printf("Scrabble value: %d\n", i);

	return 0;
}