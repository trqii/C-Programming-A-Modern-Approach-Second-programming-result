#include<stdio.h>

int main()
{
	int n, s = 0;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);
	//first
	s +=  n % 8;
	//second
	n /= 8;
	s += n % 8 * 10;
	//third
	n /= 8;
	s += n % 8 * 100;
	//fourth
	n /= 8;
	s += n % 8 * 1000;
	//fifth
	n /= 8;
	s += n % 8 * 10000;
	printf("In octal, your number is: %.5d\n", s);

	return 0;
}