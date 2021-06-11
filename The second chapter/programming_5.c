#include<stdio.h>

int main()
{
	int x = 0;
	int result = 0;

	printf("Enter the value of X: ");
	scanf("%d", &x);
	result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x *x * x) - (x * x) + (7 * x) - 6;
	printf("The polynomial is %d\n", result);

	return 0;
}