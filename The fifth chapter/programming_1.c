#include<stdio.h>

int main()
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	printf("The number %d has ", n);
	if(n >= 0 && n <= 9)
	{
		printf("1 digits\n");
	}
	else if(n >= 10 && n <= 99)
	{
		printf("2 digits\n");
	}
	else if(n >= 100 && n <= 999)
	{
		printf("3 digits\n");
	}
	else
	{
		printf("4 digits\n");
	}

	return 0;
}