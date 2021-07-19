#include<stdio.h>

int main()
{
	int digit;

	printf("Enter a two-digit number: ");
	scanf("%d", &digit);

	printf("You entered the number ");
	//11--19
	switch(digit)
	{
		case 11: printf("eleven\n");    return 0;
		case 12: printf("twelve\n");    return 0;
		case 13: printf("thirteen\n");  return 0;
		case 14: printf("fourteen\n");  return 0;
		case 15: printf("fifteen\n");   return 0;
		case 16: printf("sixteen\n");   return 0;
		case 17: printf("seventeen\n"); return 0;
		case 18: printf("eighteen\n");  return 0;
		case 19: printf("nineteen\n");  return 0;
	}
	//10, 20--99
	switch(digit / 10)
	{
		case 1: printf("ten");     break;
		case 2: printf("twenty");  break;
		case 3: printf("thirty");  break;
		case 4: printf("forty");   break;
		case 5: printf("fifty");   break;
		case 6: printf("sixty");   break;
		case 7: printf("seventy"); break;
		case 8: printf("eighty");  break;
		case 9: printf("ninety");  break;
	}

	switch(digit % 10)
	{
		case 0: printf("\n");       break;
		case 1: printf("-one\n");   break;
		case 2: printf("-two\n");   break;
		case 3: printf("-three\n"); break;
		case 4: printf("-four\n");  break;
		case 5: printf("-five\n");  break;
		case 6: printf("-six\n");   break;
		case 7: printf("-seven\n"); break;
		case 8: printf("-eight\n"); break;
		case 9: printf("-nine\n");  break;
	}
		
	return 0;
}