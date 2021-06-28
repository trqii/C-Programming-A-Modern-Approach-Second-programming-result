#include<stdio.h>

int main()
{
	int n1, n2, n3, n4, largest, smallest, fmax, fmin, smax, smin;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if(n1 > n2)
	{
		fmax = n1;
		fmin = n2;
	}
	else
	{
		fmax = n2;
		fmin = n1;
	}
	if(n3 > n4)
	{
		smax = n3;
		smin = n4;
	}
	else
	{
		smax = n4;
		smin = n3;
	}
	if(fmax > smax)
	{
		largest = fmax;
	}
	else
	{
		largest = smax;
	}
	if(fmin > smin)
	{
		smallest = smin;
	}
	else
	{
		smallest = fmin;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}