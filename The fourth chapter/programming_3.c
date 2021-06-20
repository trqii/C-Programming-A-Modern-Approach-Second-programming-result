#include<stdio.h>

int main()
{
	int x, y, z;
	
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &x, &y, &z);
	printf("The reversal is: %d%d%d\n", z, y, x);//The head display have zero
	//printf("The reversal is %d\n", z * 100 + y * 10 + x);//The head don't display have zero
	
	return 0;
}