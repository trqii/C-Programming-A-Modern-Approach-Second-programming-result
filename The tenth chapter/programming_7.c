#include<stdio.h>

#define MAX_DIGITS 10

char digits[3][4 * MAX_DIGITS];
const int segments[MAX_DIGITS][7] = {
	{ 1, 1, 1, 1, 1, 1, 0 },
	{ 0, 1, 1, 0, 0, 0, 0 },
	{ 1, 1, 0, 1, 1, 0, 1 },
	{ 1, 1, 1, 1, 0, 0, 1 },
	{ 0, 1, 1, 0, 0, 1, 1 },
	{ 1, 0, 1, 1, 0, 1, 1 },
	{ 1, 0, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 0, 0, 0, 0 },
	{ 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 1, 1, 1, 0, 1, 1 } };

void clear_digits_array();
void process_digit(int digit, int position);
void print_digits_array();

int main()
{
	char ch;
	int n = 0;

	clear_digits_array();

	printf("Enter a number: ");

	while ((ch = getchar()) != '\n' && n < MAX_DIGITS)
	{
		if (ch >= '0' && ch <= '9')
		{
			process_digit(ch - '0', n);
			n++;
		}
	}

	print_digits_array();

	return 0;
}

void clear_digits_array()
{
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 4 * MAX_DIGITS; j++)
		digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	for (int i = 0; i < 7; i++)
	{
		if (segments[digit][i] == 1)
		{
			switch (i)
			{
			case 0: digits[0][1 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 1: digits[1][2 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 2: digits[2][2 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 3: digits[2][1 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 4: digits[2][0 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 5: digits[1][0 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			case 6: digits[1][1 + 4 * position] = (i % 3 == 0 ? '_' : '|'); break;
			}
		}
	}
}

void print_digits_array()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4 * MAX_DIGITS; j++)
		{
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}