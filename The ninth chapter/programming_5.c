#include<stdio.h>

void create_magic_square(int n, int magic_square[99][99])
{
	int x, y;
	int rx, ry;
	int i, j;

	x = 0;
	y = n / 2;

	rx = x;
	ry = y;

	magic_square[0][y] = 1;

	for(i = 2; i <= n * n; i++)
	{
		x--;
		if(x < 0)
			x = n - 1;
		y++;
		if(y >= n)
			y = 0;

		if(magic_square[x][y] == 0)
		{
			magic_square[x][y] = i;
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
			magic_square[x][y] = i;
		}
	}
}

void print_magic_square(int n, int magic_square[99][99])
{
	int i, j;

	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%5d", magic_square[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	int arr[99][99] = {0};
	int n;

	printf("This is program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	create_magic_square(n, arr);
	print_magic_square(n, arr);

	return 0;
}