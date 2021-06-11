#include<stdio.h>

int main()
{
	int x = 0;
	int result = 0;

	printf("Enter the value of X: ");
	scanf("%d", &x);
	result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("The polynomial is %d\n", result);

	return 0;
}