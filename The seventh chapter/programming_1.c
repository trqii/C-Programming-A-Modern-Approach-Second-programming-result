#include<stdio.h>

//16 bit
int main()
{
	short i = 1;
	while((short)(i * i) > 0)
	{
		printf("%hd   %hd\n", i, i * i);
		i++;
	}
	return 0;
}

//32 bit
//int main()
//{
//	int i = 1;
//	while((int)(i * i) > 0)
//	{
//		printf("%d   %d\n", i, i * i);
//		i++;
//	}
//	return 0;
//}