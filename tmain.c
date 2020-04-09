#include <stdio.h>
#include <stdlib.h>
#include "stackapi.h"

int main(int argc, char ** argv)
{
	int number = atoi(argv[1]);
	
	printbinary(number);
	return 0;
}
