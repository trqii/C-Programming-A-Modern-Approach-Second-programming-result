#include<stdio.h>

int main()
{
	int i, n;
	short p = 1;//change other

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
		p *= i;
	printf("Factorial of %d: %hd\n", n, p);//change other

	return 0;
}
