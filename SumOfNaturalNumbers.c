// A program to print sum of first n natural number
#include <stdio.h>

int main() {
	int i, n, sum = 0;
	printf("Sum of first n natural numbers:\nn = ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		sum = sum+i;
	}
	printf("The sum of %d natural numbers is %d", n, sum);
}
