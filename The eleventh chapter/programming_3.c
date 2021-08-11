#include<stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	int n = numerator, m = denominator;
	int r;

	while (r = n % m)
	{
		n = m;
		m = r;
	}

	*reduced_numerator = numerator / m;
	*reduced_denominator = denominator / m;
}

int main()
{
	int numerator, denominator;
	int reduced_numerator, reduced_denominator;

	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

	printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

	return 0;
}