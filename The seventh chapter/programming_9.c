#include<stdio.h>

int main()
{
	int hour, minute;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hour, &minute, &ch);

	if(ch == 'p' || ch == 'P')
		hour += 12;

	printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minute);

	return 0;
}