#include <stdio.h>

int main() {
	int i, n;
	printf("Enter a number whose table you wanna print: ");
	scanf("%d", &n);
	
	for(i=1; i<=10; i++) {
		printf("%d\n", n*i);
	}
	return 0;
}
