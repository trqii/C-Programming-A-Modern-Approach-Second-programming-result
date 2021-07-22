#include <stdio.h>
#include <ctype.h>

#define N 100

int main()
{
    int i, n = 0;
    char a_ch[N];
    char ch;

    printf("Enter message: ");

    for (i = 0; (ch = getchar()) != '\n'; i++, n++) 
	{
        ch = toupper(ch);
        switch (ch) 
		{
        case 'A':ch = '4'; break;
        case 'B':ch = '8'; break;
        case 'E':ch = '3'; break;
        case 'I':ch = '1'; break;
        case 'O':ch = '0'; break;
        case 'S':ch = '5'; break;
        }
        a_ch[i] = ch;
    }

    printf("IN B1FF-speak: ");
    for (i = 0; i <= n - 1; i++) 
	{
        printf("%c", a_ch[i]);
    }
    printf("!!!!!!!!!!\n");

    return 0;
}
