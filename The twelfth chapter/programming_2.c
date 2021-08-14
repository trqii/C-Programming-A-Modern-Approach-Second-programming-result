//(a)
//#include<stdio.h>
//#include<ctype.h>
//
//#define MAX_LEN 100
//
//int main()
//{
//	char msg[MAX_LEN];
//	int ch;
//	int i;
//
//	printf("Enter a message: ");
//	for (i = 0; i < MAX_LEN;)
//	{
//		ch = toupper(getchar());
//		if (ch == '\n')
//			break;
//		else if (ch >= 'A' && ch <= 'Z')
//			msg[i++] = ch;
//	}
//
//	int left = 0;
//	int right = i - 1;
//	while (left < right)
//	{		
//		if (msg[left] != msg[right])
//		{
//			printf("Not a palindrome\n");
//			break;
//		}
//		left++;
//		right--;
//	}
//	if (left >= right)
//		printf("Palindrome\n");
//
//	return 0;
//}

//(b)

#include<stdio.h>
#include<ctype.h>

#define MAX_LEN 100

int main()
{
	char msg[MAX_LEN], *p;
	int ch;

	printf("Enter a message: ");
	for (p = msg; p < msg + MAX_LEN;)
	{
		ch = toupper(getchar());
		if (ch == '\n')
			break;
		else if (ch >= 'A' && ch <= 'Z')
			*p++ = ch;
	}

	char *left = msg;
	char *right = p - 1;
	while (left < right)
	{
		if (*left != *right)
		{
			printf("Not a palindrome\n");
			break;
		}
		left++;
		right--;
	}
	if (left >= right)
		printf("Palindrome\n");

	return 0;
}