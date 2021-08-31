#include <stdio.h>

void encrypt(char* message, int shift);

int main()
{
	char message[100] = { 0 };
	int n;

	printf("Enter message to be encrypted: ");
	gets(message);

	printf("Enter shift amout (1~25): ");
	scanf("%d", &n);

	encrypt(message, n);

	printf("Encrypted message: ");
	puts(message);

	return 0;
}

void encrypt(char* message, int shift)
{
	while (*message)
	{
		if (*message >= 'A' && *message <= 'Z')
		{
			*message = (*message - 'A' + shift) % 26 + 'A';
		}
		else if (*message >= 'a' && *message <= 'z')
		{
			*message = (*message - 'a' + shift) % 26 + 'a';
		}
		message++;
	}
}