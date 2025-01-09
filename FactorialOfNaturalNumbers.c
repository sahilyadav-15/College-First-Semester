// Factorial of a number
#include <stdio.h>

int main() {
	int i, n, fact=1;
	printf("Calculating factorial of n natural numbers.\nn = ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		fact = fact*i;
	}
	printf("The factorial of %d natural numbers is %d", fact);
}
