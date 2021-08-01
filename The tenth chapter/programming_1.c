
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty();
int stack_overflow();
int stack_underflow();
bool is_empty();
bool is_full();
void push(char i);
char pop();

int main()
{
	char ch;
	make_empty();

	printf("Enter parenteses and/or braces: ");

	do
	{
		ch = getchar();
		if (ch == '(' || ch == '{')
		{
			push(ch);
		}
		else if (ch == ')' && pop() != '(')
		{
			printf("Parenteses/braces are not nested properly\n");
			return 0;
		}
		else if (ch == '}' && pop() != '{')
		{
			printf("Parenteses/braces are not nested properly\n");
			return 0;
		}
	} while (ch != '\n');

	if (is_empty())
		printf("Parenteses/braces are nested properly\n");
	else
		printf("Parenteses/braces are not nested properly\n");

	return 0;
}

int stack_overflow()
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

int stack_underflow()
{
	printf("Stack_underflow\n");
	exit(EXIT_FAILURE);
}

void make_empty()
{
	top = 0;
}

bool is_empty()
{
	return top == 0;
}

bool is_full()
{
	return top == STACK_SIZE;
}

void push(char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop()
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}