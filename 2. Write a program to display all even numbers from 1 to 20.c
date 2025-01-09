#include <stdio.h>

int main() {
	int i;
	printf("Even numbers from 1 to 20 are:\n");
	for(i=2; i<=20; i += 2) {
		printf("%d\n", i);
	}
}
