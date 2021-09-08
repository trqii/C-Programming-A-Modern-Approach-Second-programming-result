#include <stdio.h>

#define MAX_LEN 100 

void reversal(char* message);

int main()
{
	char message[MAX_LEN] = { 0 };

	printf("Enter a message: ");
	gets(message);

	reversal(message);

	printf("Reversal is: ");
	puts(message);

	return 0;
}

void reversal(char* message)
{
	char* p = message;
	char* q = message;
	while (*message)
	{
		q = message++;
	}

	char t;
	while (p < q)
	{
		t = *p;
		*p = *q;
		*q = t;
		p++, q++;
	}
}
