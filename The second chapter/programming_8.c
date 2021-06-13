#include<stdio.h>

int main()
{
	float loan = 0.0f;
	float rate = 0.0f;
	float payment = 0.0f;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("\n");
	//first
	loan = loan - payment + loan * (rate / 100.0f / 12.0f);
	printf("Balance remaining after first payment: $%.2f\n", loan);
	//second
	loan = loan - payment + loan * (rate / 100.0f / 12.0f);
	printf("Balance remaining after second payment: $%.2f\n", loan);
	//third
	loan = loan - payment + loan * (rate / 100.0f / 12.0f);
	printf("Balance remaining after third payment: $%.2f\n", loan);

	return 0;
}