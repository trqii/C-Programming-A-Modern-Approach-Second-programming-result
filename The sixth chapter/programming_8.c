#include<stdio.h>

int main()
{
	int day, week, i;

	printf("Enter number of days in month: ");
	scanf("%d", &day);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &week);
	
	for(i = 1; i <= week -1; i++)
		printf("   ");
	for(i = 1; i <= day; i++, week++)
	{	
		printf("%2d ", i);
		if(week % 7 == 0)
			printf("\n");
	}

	printf("\n");

	return 0;
}