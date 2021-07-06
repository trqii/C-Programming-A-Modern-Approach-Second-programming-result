#include <stdio.h>
 
int main ()
{
	int num, i;
	float money, rate, payment; 
	
	printf("Enter amount of loan: ");
	scanf("%f", &money);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);	
	
	printf ("Enter the number of repayments: ");
	scanf ("%d", &num); 
	 	 
	for(i = 1; i <= num; i++)
	{
		printf ("Balance remaining after %2d", i);
		
		printf (" payment: $%.2f\n", money = ((money - payment) + (money * rate * 0.01/ 12)));
	}
	
	return 0;
}
