#include<stdio.h>

#define N 5

int main()
{
	int arr[N][N];
	int i, j;

	for(i = 0; i < N; i++)
	{
		printf("Enter %d student grades: ", i + 1);
		for(j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\n");

	for(i = 0; i < N; i++)
	{
		int sum = 0;		
		for(j = 0; j < N; j++)
		{
			sum += arr[i][j];
		}
		printf("The %d student totals %d average %.2f\n", i + 1, sum, (float)sum / N);
	}
	printf("\n");

	for(i = 0; i < N; i++)
	{
		float avg = 0.0f;
		int max = arr[0][i];
		int min = arr[0][i];
		for(j = 0; j < N; j++)
		{
			avg += arr[j][i];
			if(max < arr[j][i])
				max = arr[j][i];
			if(min > arr[j][i])
				min = arr[j][i];
		}
		printf("The %d subject average %.2f, max %d, min %d\n", i + 1, avg / N, max, min);
	}
	printf("\n");

	return 0;
}