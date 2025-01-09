#include <stdio.h>

int main() {
	int i, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Reversed number: ");
	
	while(n>0) {
		printf("%d", n%10);	
		n /= 10;
	}
}
