#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 12
#define LINE 10

void generate_random_walk(char walk[N][N])
{
	int i, j;
	for(i = 1; i <= LINE; i++)
	{
		for(j = 1; j <= LINE; j++)
		{
			walk[i][j] = '.';
		}		
	}

	{
		int x = 1, y = 1;
		char ch = 'B';
		i = x, j = y;
		walk[1][1] = 'A';
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
			if(x >= 1 && x <= LINE && y >= 1 && y <=LINE && walk[x][y] == '.')
			{
				walk[x][y] = ch;
				i = x;
				j = y;
				ch++;
				if(ch > 'Z')
					break;
				if(walk[x - 1][y] != '.' && walk[x + 1][y] != '.' && walk[x][y - 1] != '.' && walk[x][y + 1] != '.')
					break;
			}
			else
			{
				x = i;
				y = j;
			}
		}
	}
}

void print_array(char walk[N][N])
{
	int i, j;
	for(i = 1; i <= LINE; i++)
	{
		for(j = 1; j <= LINE; j++)
		{
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	char walk[N][N];

	srand((unsigned int)time(NULL));
	generate_random_walk(walk);
	print_array(walk);

	return 0;
}