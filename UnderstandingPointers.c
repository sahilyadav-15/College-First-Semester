// To understand the concept of pointers
#include <stdio.h>

int main() {
	int x = 15;
	int *ptr = &x;
	printf("Value of X = %d\n", x);
	printf("Address of X = %d\n", &x);
	printf("Address of X = %d\n", ptr);
	printf("Value stored at address of X = %d", *ptr);
}
