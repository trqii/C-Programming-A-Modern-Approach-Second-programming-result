#include<stdio.h>

int main()
{	
	int number[10] = {0};	
	long long n;

	printf("Enter number: ");
	while(1)
	{
		int flag = 0;
		int i;
		scanf("%lld", &n);
		if(n <= 0)
			break;

			while(n > 0)
			{
				int digit = n % 10;
				number[digit]++;
				if(number[digit] >= 2)
					flag = 1;
				n /= 10;
			}

			if(flag)
				printf("Repeated digit\n");
			else
				printf("No repeated digit\n");

			for(i = 0; i < 10; i++)
				number[i] = 0;			
	}
	
	return 0;
}
