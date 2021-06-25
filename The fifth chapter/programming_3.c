#include<stdio.h>

int main()
{
	int num;
	float price, value, commission1, commission2;
	
	printf ("Enter stock number: ");
	scanf ("%d", &num);
	printf ("Enter stock value: "); 
	scanf ("%f", &price);
	
	value = num * price;
	//Yourself
	if (value < 2500.0f)
		commission1 = 30.0f + 0.017f * value;
	else if (value < 6250.0f) 
		commission1 = 56.0f + 0.0066f * value;
	else if (value < 20000.0f) 
		commission1 = 76.0f + 0.0034f * value;
	else if (value < 50000.0f) 
		commission1 = 100.0f + 0.0022f * value;
	else if (value < 500000.0f) 
		commission1 = 155.0f + 0.0011f * value;
	else 
		commission1 = 255.0f + 0.0009f * value;
	
	if (commission1 < 39) 
		commission1 = 39;	
	//Rival
	if (num < 2000)
		commission2 = 33.03f * num; 
	else 
		commission2 = 33.02f * num;	
	
	printf("Your commission: $%.2f, Rival commission: $%.2f\n", commission1, commission2);

	return 0;
}