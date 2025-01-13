#include <stdio.h>

int main() {
	int n, i, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(i=1; i<n; i++) {
		if(n%i==0) {
			sum += i;
			printf("%d\t", i);
		}
	}
	
	printf(" = %d", sum);
	if(sum == n) printf("\n%d is a perfect number.\n", n);
	else printf("\n%d is not a perfect number.\n", n);
	
	return 0;
}
