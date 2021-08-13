//(a)
//#include <stdio.h>
//
//#define MSG_LEN 80     /* maximum length of message */
//
//int main()
//{
//  char msg[MSG_LEN];
//  int i;
//
//  printf("Enter a message: ");
//  for (i = 0; i < MSG_LEN; i++) 
//	{
//    msg[i] = getchar();
//    if (msg[i] == '\n')
//      break;
//  }
//
//  printf("Reversal is: ");
//  for (i--; i >= 0; i--)
//    putchar(msg[i]);
//  putchar('\n');
//
//  return 0;
//}

//(b)

#include <stdio.h>

#define MSG_LEN 80     /* maximum length of message */

int main()
{
	char msg[MSG_LEN], *p;

	printf("Enter a message: ");
	for (p = &msg[0]; p < &msg[MSG_LEN]; p++)
	{
		*p = getchar();
		if (*p == '\n')
			break;
	}

	printf("Reversal is: ");
	for (p--; p >= &msg[0]; p--)
		putchar(*p);
	putchar('\n');

	return 0;
}