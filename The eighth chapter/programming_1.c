#include<stdio.h>

int main()
{
	int number[10] = {0};
	int flag = 0;
	long long n;

	printf("Enter a number: ");
	scanf("%lld", &n);

	while(n > 0)
	{
		int digit = n % 10;
		number[digit]++;
		if(number[digit] >= 2)
			flag = 1;
		n /= 10;
	}

	if(flag)
	{
		int i = 0;
		printf("Repeted digit(s): ");
		for(i = 0; i < 10; i++)
		{
			if(number[i] >= 2)
				printf("%d ", i);
		}
	}
	else
	{
		printf("No repeated digit\n");
	}
	return 0;
}