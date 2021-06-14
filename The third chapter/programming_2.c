#include<stdio.h>

int main()
{
	int number, y, m, d;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%-d\t$%7.2f\t%-.2d/%-.2d/%-d\n", number, price, m, d, y);

	return 0;
}



