#include<stdio.h>

int main()
{
	double num1, num2;
	int ch;

	printf("Enter an expression: ");

	scanf("%lf", &num1);
	while((ch = getchar()) != '\n')
	{
		scanf("%lf", &num2);
		switch(ch)
		{
			case '+': num1 += num2; break;
			case '-': num1 -= num2; break;
			case '*': num1 *= num2; break;
			case '/': num1 /= num2; break;
		}
	}
	printf("Value of expression: %.1lf\n", num1);

	return 0;
}
