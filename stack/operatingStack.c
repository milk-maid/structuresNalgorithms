#include <stdio.h>
#define N 5

/**
 * main - Entry Point
 *
 * Return: Always 0(success);
 */

int stack[N];
int top = -1;

void push(void)
{
	int x;

	printf("What data do you wish to enter?\n");
	scanf("%d", &x);
	if (top == N - 1)
	{
		printf("Overflow Condition .'. can't input value\n");
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop(void)
{
	int item;

	if (top == -1)
	{
		printf("No Data Available on stack i.e UNDERFLOW CONDITION\n");
	}
	else
	{
		item = stack[top];
		top--;
		printf("the popped item is %d\n", item);
	}
}

void peek(void)
{
	if (top == -1)
	{
		printf("An Emptyb Stack it is\n");
	}
	else
	{
		printf("%d", stack[top]);
	}
}

void display(void)
{
	int i;

	for (i = top; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
}

int main(void)
{
	int ch;

	do {
		printf("What Process? 1=Push, 2=Pop, 3=Peek, 4=Display\n");
		scanf("%d", &ch);

		switch (ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("Would You Not like to Enter A valid option\n");
		}
	} while(ch != 0);
	printf("Thank You!!!\n End of Program!*!\n");
	return (0);
}
