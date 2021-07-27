#include<stdio.h>

int main()
{
	int arr[99][99] = {0};
	int x, y, n;
	int rx, ry;
	int i, j;
	
	printf("This is program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
		
	x = 0;
	y = n / 2;

	rx = x;
	ry = y;

	arr[0][y] = 1;

	for(i = 2; i <= n * n; i++)
	{
		x--;
		if(x < 0)
			x = n - 1;
		y++;
		if(y >= n)
			y = 0;

		if(arr[x][y] == 0)
		{
			arr[x][y] = i;
			rx = x;
			ry = y;
		}
		else
		{
			x = rx;
			y = ry;
			x++;
			if(x >= n)
				x = 0;
			arr[x][y] = i;
		}
	}

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}


