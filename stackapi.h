struct
{
	int top;
	int size;
	int *array;
}typedef stack;

void init(stack *s, int size);
void push(stack *s, int num);
int pop(stack *s);
void printbinary(int number);
