#include<stdio.h>

int power(int x, int n)
{
	if (x == 0 && n == 0) 
	{
        printf("ERROR\n");
        return 0;
    }
    else if (x == 0) 
	{
        return 0;
    }
    else if (n == 0) 
	{
        return 1;
    }
    else if (n % 2 == 0) 
	{
        int t = power(x, n / 2);    
        return t * t;
    }
    else 
	{
        int t = power(x, n - 1);
        return x * t;
    }
}

int main()
{
	int n;
	int x;

	printf("Enter x and n: ");
	scanf("%d%d", &x, &n);

	printf("%d\n", power(x, n));
	
	return 0;
}