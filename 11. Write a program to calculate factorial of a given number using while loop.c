#include <stdio.h>

int main() {
	int n, i = 1, fact = 1;
	printf("The number you want the factorial for: ");
	scanf("%d", &n);
	
	while(i<=n) {
		fact *= i;
		i++;
	}
	
	printf("The factorial of %d is %d", n, fact);
	
	return 0;
}
