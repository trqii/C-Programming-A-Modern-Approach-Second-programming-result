#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int main()
{
	char arr[12][12] = {0};
	int i, j;

	srand((unsigned int)time(NULL));

	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= N; j++)
		{
			arr[i][j] = '.';
		}
	}

	
	{
		int x = 1;
		int y = 1;
		char ch = 'B';
		i = x, j = y;
		arr[1][1] = 'A';		

		while(1)
		{
			int direction = rand() % 4;
			switch(direction)
			{
			case 0: x--; break;
			case 1: x++; break;
			case 2: y--; break;
			case 3: y++; break;
			}
			if(x >= 1 && x <= N && y >= 1 && y <= N && arr[x][y] == '.')
			{
				arr[x][y] = ch;
				i = x;
				j = y;
				ch++;
				if(ch > 'Z')
					break;
				if(arr[x - 1][y] !='.' && arr[x + 1][y] != '.' && arr[x][y - 1] !='.' && arr[x][y + 1] != '.')
					break;
			}
			else
			{
				x = i;
				y = j;
			}
		}

		for(i = 1; i <= N; i++)
		{
			for(j = 1; j <= N; j++)
			{
				printf("%c ", arr[i][j]);
			}
			printf("\n");
		}
	}

	return 0;
}