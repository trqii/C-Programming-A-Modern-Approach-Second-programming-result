#include<stdio.h>

int main()
{
	int num, denom;
	int m, n, r;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);

	m = denom;
	n = num;
	
	while(n != 0)
	{
		r = m % n;
		m = n;
		n =r;
	}

	printf("In lowest terms: %d/%d\n", num / m, denom / m);

	return 0;
}