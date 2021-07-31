#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0;
    int losses = 0;
    int ch;

    srand((unsigned)time(NULL));    

    do 
	{
        if (play_game())
		{
            printf("You win!\n\n");
            wins++;
        }
        else 
		{
            printf("You lose!\n\n");
            losses++;
        }
        printf("Play again?");
        ch = getchar();
        getchar(); 
        printf("\n");

    } while (toupper(ch) == 'Y');

    printf("Wins: %d\tLosses: %d",wins, losses);

    return 0;
}

int roll_dice(void)
{
    int m, n;
    m = rand() % 6 + 1;
    n = rand() % 6 + 1;
    return m + n;
}

bool play_game(void)
{
    int sum;
    int point;
    
    printf("You rolled: %d\n", point = roll_dice());
    if (point == 7 || point == 11) 
	{
        return true;
    }
    else if (point == 2 || point == 3 || point == 12)
	{
        return false;
    }
    else 
	{
        printf("You point is: %d\n", point);
    }

    while (1) 
	{
        printf("You rolled: %d\n", sum = roll_dice());
        if (sum == point) 
		{
            return true;
        }
        else if (sum == 7)
		{
            return false;
        }
    }
}
