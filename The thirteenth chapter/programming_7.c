#include <stdio.h>

int main()
{
	int number, tens, ones;
	char* x[] = { "one.", "two.", "three", "four.", "five.",
		"six.", "seven.", "eight.", "nine." };
	char* xy[] = { "ten.", "eleven.", "twelve.", "thirteen.",
		"fourteen.", "fifteen.", "sixteen.", "seventeen.",
		"eighteen.", "nineteen." };
	char* yy[] = { "twenty-", "thirty-", "forty-", "fifty-",
		"sixty-", "seventy-", "eighty-", "ninety-" };

	printf("Enter a two-digit number: ");
	scanf("%d", &number);

	if (number < 1 || number > 99)
	{
		printf("ERROR");
		return 0;
	}

	tens = number / 10;
	ones = number % 10;

	printf("You entered the number: ");

	if (tens == 0)
		printf("%s", x[ones - 1]);
	else if (tens == 1)
		printf("%s", xy[ones]);
	else
		printf("%s%s", yy[tens - 2], x[ones - 1]);

	return 0;
}
