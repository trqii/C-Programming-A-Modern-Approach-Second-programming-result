#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;
void make_empty();
int stack_overflow();
int stack_underflow();
bool is_empty();
bool is_full();
void push(int i);
int pop();
int evaluate_RPN_expression(const char* expression);

int main(void)
{
	char* expression[30] = { 0 };

	make_empty();

	while (1)
	{
		printf("Enter an RPN expression: ");
		gets(expression);

		printf("%d\n\n", evaluate_RPN_expression(expression));
	}

	return 0;
}

int evaluate_RPN_expression(const char* expression)
{
	int m, n;

	while (*expression != '=')
	{
		switch (*expression)
		{
		case '0': push(0); break;
		case '1': push(1); break;
		case '2': push(2); break;
		case '3': push(3); break;
		case '4': push(4); break;
		case '5': push(5); break;
		case '6': push(6); break;
		case '7': push(7); break;
		case '8': push(8); break;
		case '9': push(9); break;

		case '+': m = pop(); n = pop(); push(n + m); break;
		case '-': m = pop(); n = pop(); push(n - m); break;
		case '*': m = pop(); n = pop(); push(n * m); break;
		case '/': m = pop(); n = pop(); push(n / m); break;

		case ' ':; break;
		default: printf("END\n"); return 0; break;
		}
		expression++;
	}

	return pop();
}

int stack_overflow()
{
	printf("Stack overflow\n");
	exit(EXIT_FAILURE);
}

int stack_underflow()
{
	printf("Stack underflow\n");
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

void push(int i)
{
	if (is_full())
	{
		stack_overflow();
	}
	else
	{
		contents[top++] = i;
	}
}

int pop()
{
	if (is_empty())
	{
		stack_underflow();
	}
	else
	{
		return contents[--top];
	}
}
