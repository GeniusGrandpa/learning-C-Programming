#include <stdio.h>

int main() {
	int *pointer=NULL;
	printf(" Data type size on this system ");
	
	printf("char: %zu bytes\n", sizeof(char));
	printf("int: %zu bytes\n", sizeof(int));
	printf("float: %zu bytes\n", sizeof(float));
	printf("double: %zu bytes\n", sizeof(double));
	printf("long: %zu bytes\n", sizeof(long));
	printf("pointer: %zu bytes\n", sizeof(int*));

	return 0;
}

