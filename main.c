#include <stdio.h>
#include "stackapi.h"

int main()
{
	int number;

	printf("Enter a number to convert it to binary: ");
	scanf("%d", &number);

	printbinary(number);

	return 0;
}
