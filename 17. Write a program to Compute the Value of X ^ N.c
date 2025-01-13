#include <stdio.h>

int main() {
	int x, n, i, result = 1;
	printf("Calculating x raised to power n\nEnter x: ");
	scanf("%d", &x);
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++) {
		result *= x;
	}
	
	printf("%d raised to the power %d is %d", x, n, result);
	
	return 0;
}
