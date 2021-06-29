#include<stdio.h>

int main()
{
	int firstYear, firstMonth, firstDate, secondYear, secondMonth, secondDate;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &firstMonth, &firstDate, &firstYear);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &secondMonth, &secondDate, &secondYear);

	if(firstYear > secondYear)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", secondMonth, secondDate, secondYear, firstMonth, firstDate, firstYear);
	else if(firstYear < secondYear)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",firstMonth, firstDate, firstYear, secondMonth, secondDate, secondYear);
	else if(firstMonth > secondMonth)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", secondMonth, secondDate, secondYear, firstMonth, firstDate, firstYear);
	else if(firstMonth < secondMonth)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",firstMonth, firstDate, firstYear, secondMonth, secondDate, secondYear);
	else if(firstDate > secondDate)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", secondMonth, secondDate, secondYear, firstMonth, firstDate, firstYear);
	else if(firstDate < secondDate)
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",firstMonth, firstDate, firstYear, secondMonth, secondDate, secondYear);
	else 
		printf("The same date\n");
	
	return 0;
}