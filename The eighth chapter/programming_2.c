#include<stdio.h>

int main()
{
	int number[10] = {0};
	int i;
	long long n;

	printf("Enter a number: ");
	scanf("%lld", &n);

	while(n > 0)
	{
		int digit = n % 10;
		number[digit]++;
		n /= 10;
	}

	printf("Digit:      ");
	for(i = 0; i < 10; i++)
		printf("%3d", i);
	
	printf("\nOccurrences:");
	for(i = 0; i < 10; i++)
		printf("%3d", number[i]);	

	printf("\n");

	return 0;
}
