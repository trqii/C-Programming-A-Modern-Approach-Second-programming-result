#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


#define MAX_LEN 100     

bool is_palindrome(const char* message);

int main()
{
	char message[MAX_LEN] = { 0 };

	printf("Enter message message: ");
	gets(message);

	if (is_palindrome(message))
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not message palindrome\n");
	}

	return 0;
}

bool is_palindrome(const char* message)
{
	const char* p = message;
	const char* q = message;
	while (*message)
	{
		q = message++;
	}

	while (p < q)
	{
		while (!isalpha(*p))
			p++;
		while (!isalpha(*q))
			q--;
		if (toupper(*p) != toupper(*q))
			return false;
		p++, q--;
	}

	return true;
}
