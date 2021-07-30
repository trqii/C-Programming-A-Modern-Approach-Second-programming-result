#include<stdio.h>

int function(int x)
{
	return 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - x * x + 7 * x - 6;
}
int main()
{
	int x;

	printf("Enter x: ");
	scanf("%d", &x);

	printf("%d\n", function(x));

	return 0;
}