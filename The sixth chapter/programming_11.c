#include <stdio.h>
 
int main()
{
	int n, i, p = 1;
	double sum = 1.0;

	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		p *= i;
		sum += 1.0 / p;
	}
	
	printf("The value of e is: %lf\n", sum);

	return 0;
}

