#include<stdio.h>

int main()
{
	char message[80];
	int count = 0;
	int i, n;
	char ch;

	printf("Enter message to be encrypted: ");
	while((ch = getchar()) != '\n')
	{
		message[count] = ch;
		count++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);

	printf("Encrypted message: ");
	for(i = 0; i <= count; i++)
	{
		ch = message[i];
		if(ch >= 'A' && ch <= 'Z')
			printf("%c", ((ch - 'A') + n) % 26 + 'A');
		else if(ch >= 'a' && ch <= 'z')
			printf("%c", ((ch - 'a') + n) % 26 + 'a');
		else
			printf("%c", ch);
	}
	printf("\n");
	
	return 0;
}