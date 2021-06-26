#include<stdio.h>

int main()
{
	int income;

	printf("Enter income: ");
	scanf("%d", &income);

	if(income < 750)
	{
		printf("Tax: %.2f\n", income * 0.01f);
	}
	else if(income < 2250)
	{
		printf("Tax: %.2f\n", 7.50f + (income - 750) * 0.02f);
	}
	else if(income < 3750)
	{
		printf("Tax: %.2f\n", 37.50f + (income - 2250) * 0.03f);
	}
	else if(income < 5250)
	{
		printf("Tax: %.2f\n", 82.50f + (income - 3750) * 0.04f);
	}
	else if(income < 7000)
	{
		printf("Tax: %.2f\n", 142.50f + (income - 5250) * 0.05f);
	}
	else 
	{
		printf("Tax: %.2f\n", 230.00f + (income - 7000) * 0.06f);
	}

	return 0;
}