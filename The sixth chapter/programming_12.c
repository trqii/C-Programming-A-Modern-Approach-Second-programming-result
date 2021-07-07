#include<stdio.h>

int main()
{
	int i, p = 1;
	double sum = 1.0, m;

	printf("Enter the number: ");
	scanf("%lf", &m);

	for(i = 1; ; i++)
	{
		p *= i;
		if((1.0 / p) < m)
			break;
		sum += 1.0 / p;
	}

	printf("The value of e is: %lf\n", sum);

	return 0;
}