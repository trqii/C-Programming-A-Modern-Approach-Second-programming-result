#include<stdio.h>

#define N 5

int main()
{
	int a[N][N];
	int i, j;

	for(i = 1; i <= N; i++)
	{
		printf("Enter row %d: ", i);
		for(j = 0; j < N; j++)
		{
			scanf("%d", &a[i - 1][j]);
		}
	}
	
	printf("\nRow toals: ");
	for(i = 0; i < N; i++)
	{
		int sum = 0;
		for(j = 0; j < N; j++)
		{
			sum += a[i][j];
		}
		printf("%d ", sum);
	}

	printf("\nColumn totals: ");
	for(i = 0; i < N; i++)
	{
		int sum = 0;
		for(j = 0; j < N; j++)
		{
			sum += a[j][i];
		}
		printf("%d ", sum);
	}
	
	printf("\n");

	return 0;
}