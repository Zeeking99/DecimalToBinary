#include <stdio.h>
#include <stdlib.h>

								// Declaring the stack data type
struct
{
	int top;
	int size;
	int *array;
}typedef stack;
	
								// Functions to perform operations on stack
void init(stack *s, int size )
{
	s->top = -1;
	s->array = (int *)malloc(size * sizeof(int));
	s->size = size;
}

void push(stack *s, int num)
{
	if(s->top == s->size-1)
		return;

	s->top++;
	s->array[s->top] = num;
}

int pop(stack *s)
{
	if(s->top == -1)
		return -9999;
	
	return s->array[s->top--];
}
								// Functions using implementations of stack 
void printbinary(int number)
{
	int temp;
	stack s2;
	
	init(&s2,20);
	
	while(number > 0 && s2.top < s2.size)
	{
		temp = number % 2;
		push(&s2, temp);
		number /= 2;
	}
	
	while(s2.top > -1)
		printf("%d", pop(&s2));
	putchar('\n');

	free(s2.array);
}

void reversefile(char *source, char *destination)
{
	FILE *fptrs, *fptrd;
	stack s;

	fptrs = fopen(source, "r");
	if(fptrs = NULL)
	{
		printf("The file wasn't accessible\n");
		return;
	}

	fptrd = fopen(destination, "w");
	if(fptrd = NULL)
	{
		printf("The file wasn't accessible\n");
		return;
	}

	char buffer;

	while(!feof(fptrs))
	{
		buff = fgetc(fptrs);
		push(buff,&s);	
