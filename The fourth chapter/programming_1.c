#include<stdio.h>

int main()
{
	int n;

	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	printf("The reversal is: %d%d\n", n % 10, n / 10);

	return 0;
}