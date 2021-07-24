#include<stdio.h>

int main()
{
	char name[20];
	char ch;	

	printf("Enter a first and last name: ");
	scanf(" %c", &ch);

	while(getchar() != ' ')
		;

	scanf("%s", name);

	printf("%s, %c.\n", name, ch);

	return 0;
}