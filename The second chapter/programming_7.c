#include<stdio.h>

int main()
{
	int dollar = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);
	printf("\n");
	//$20
	printf("$20 bills: %d\n", dollar / 20);
	dollar = dollar - (dollar / 20) * 20;//or dollar = dollar % 20;
	//$10
	printf("$10 bills: %d\n", dollar / 10);
	dollar = dollar - (dollar / 10) * 10;//or dollar = dollar % 10
	//$5
	printf(" $5 bills: %d\n", dollar / 5);
	dollar = dollar - (dollar / 5) * 5;  //or dollar = dollar % 5
	//$1
	printf(" $1 bills: %d\n", dollar);

	return 0;
}