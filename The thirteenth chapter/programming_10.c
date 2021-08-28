#include <stdio.h>
#include <ctype.h>

void reverse_name(char* name);

int main()
{
	char name[20] = { 0 };

	printf("Enter the name:");
	gets(name);

	reverse_name(name);

	return 0;
}

void reverse_name(char* name)
{
	while (*name == ' ') name++;
	char ch_ = toupper(*name);

	while (*name != ' ') name++;
	while (*name == ' ') name++;
	while (*name != ' ')
	{
		printf("%c", *name);
		name++;
	}

	printf(", %c\n", ch_);
}
