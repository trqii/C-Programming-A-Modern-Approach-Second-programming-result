#include <stdio.h>

int main()
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char ch;

	printf("Enter two fractions separated by a sign which wanted: ");
	scanf("%d/%d", &num1, &denom1);
	ch = getchar();
	scanf("%d/%d", &num2, &denom2);
	
	switch(ch)
	{
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
	}

	//reduction
	{
		int m, n, r;
		m = result_num;
		n = result_denom;
		while(r = m % n)
		{
			m = n;
			n = r;
		}
		result_num /= n;
		result_denom /= n;
	}
	
	printf("The result is: %d/%d\n", result_num, result_denom);

	return 0;
}