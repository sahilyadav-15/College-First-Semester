// Factorial using recurssion

#include <stdio.h>

int fact = 1;

calcFactorial(int n) {
	fact = fact*n;
	if(n==1) return 0;
	else calcFactorial(n-1);
}

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	calcFactorial(n);
	printf("%d", fact);
}
