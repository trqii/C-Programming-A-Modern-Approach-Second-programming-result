#include <stdio.h>

int main()
{
	int n, i;

	printf("Enter a number: ");
	scanf("%d", &n);

	for(i = 2; i * i <= n; i = i + 2)
		printf("%d\n", i * i);
		
		return 0;
}