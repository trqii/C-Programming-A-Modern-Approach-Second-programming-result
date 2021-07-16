#include<stdio.h>

int main()
{
	int ch, ch_;

	printf("Enter a first and last name: ");

	scanf(" %c", &ch_);
	//while(getchar() != ' ')
		;
	while((ch = getchar()) != '\n')
		putchar(ch);
	printf(", %c.\n", ch_);

	return 0;
}
