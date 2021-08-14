#include<stdio.h>

int main()
{
	char sentence[100], *p;
	char ch;

	sentence[0] = ' ';
	printf("Enter a sentence: ");
	for (p = &sentence[1]; p < sentence + 100;)
	{
		ch = getchar();
		if (ch == '!' || ch == '?' || ch == '.')
			break;
		*p++ = ch;
	}

	char *t1;
	char *t2;
	for (p--; p >= sentence;)
	{
		t2 = p;
		while (*p != ' ') p--;
		t1 = p + 1;

		for (; t1 <= t2; t1++)
			printf("%c", *t1);
		printf(" ");
		p = p - 1;
	}
	printf("\b%c\n", ch);
}