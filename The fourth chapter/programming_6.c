#include<stdio.h>

int main()
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, f_sum, s_sum, total;

	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12);

	f_sum = n2 + n4 + n6 + n8 + n10 + n12;
	s_sum = n1 + n3 + n5 + n7 + n9 + n11;
	total = 3 * f_sum + s_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}